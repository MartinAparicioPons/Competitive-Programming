#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define MP make_pair

using namespace std;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 50400;

char T[MAXN];
int n, RA[MAXN], TRA[MAXN], SA[MAXN], TSA[MAXN];
int C[MAXN], Phi[MAXN], PLCP[MAXN], LCP[MAXN];

int RMQ[MAXN][40], RMQ2[MAXN][40];

/// RMQ LCP 
void create_rmq_table (int L[], int n) {
	int i, j;
	for (i=0; i<n; i++) RMQ[i][0] = i;
	for (j=1; (1<<j)<=n; j++) {
		for (i=0; i+(1<<j)-1<n; i++) {
			if (L[RMQ[i][j-1]] <= L[RMQ[i+(1<<(j-1))][j-1]]) RMQ[i][j] = RMQ[i][j-1];
			else RMQ[i][j] = RMQ[i+(1<<(j-1))][j-1];
		}
	}
}
int rmq (int L[], int n, int i, int j) {
	if(i < 0 || j < i) return 0;
	j = min(j, n);
	int k = (int)floor(log((double)j-i+1) / log(2.0));
	if (L[RMQ[i][k]] <= L[RMQ[j-(1<<k)+1][k]]) return RMQ[i][k];
	else return RMQ[j-(1<<k)+1][k];
}

/// RMQ SA
void create_rmq_table2 (int L[], int n) {
	int i, j;
	for (i=0; i<n; i++) RMQ2[i][0] = i;
	for (j=1; (1<<j)<=n; j++) {
		for (i=0; i+(1<<j)-1<n; i++) {
			if (L[RMQ2[i][j-1]] >= L[RMQ2[i+(1<<(j-1))][j-1]]) RMQ2[i][j] = RMQ2[i][j-1];
			else RMQ2[i][j] = RMQ2[i+(1<<(j-1))][j-1];
		}
	}
}
int rmq2 (int L[], int n, int i, int j) {
	if(i < 0 || j < i) return 0;
	j = min(j, n);
	int k = (int)floor(log((double)j-i+1) / log(2.0));
	if (L[RMQ2[i][k]] >= L[RMQ2[j-(1<<k)+1][k]]) return RMQ2[i][k];
	else return RMQ2[j-(1<<k)+1][k];
}


/// Suffix array

void countSort(int k){
	int i, t, sum = 0, maxi = max(300, n);
	memset(C, 0, sizeof C);
	for(i = 0; i < n; i++) C[(i+k < n) ? RA[i+k] : 0]++;
	for(i = 0; i < maxi; i++){
		t = C[i]; C[i] = sum; sum += t;
	}
	for(i = 0; i < n; i++) TSA[C[(SA[i]+k < n) ? RA[SA[i]+k] : 0]++] = SA[i];
	for(i = 0; i < n; i++) SA[i] = TSA[i];
}

void constructSA(){
	int i, k, r;
	for(i = 0; i < n; i++) RA[i] = T[i];
	for(i = 0; i < n; i++) SA[i] = i;
	for(k = 1; k < n; k <<= 1){
		countSort(k); countSort(0);
		TRA[SA[0]] = r = 0;
		for(i = 1; i < n; i++) TRA[SA[i]] = (RA[SA[i]] == RA[SA[i-1]] && RA[SA[i]+k] == RA[SA[i-1]+k]) ? r : ++r;
		for(i = 0; i < n; i++) RA[i] = TRA[i];
		if(RA[SA[n-1]] == n-1) break;
	}
}

void computeLCP(){
	int i, L;
	Phi[SA[0]] = -1;
	for(i = 1; i < n; i++) Phi[SA[i]] = SA[i-1];
	for(i = L = 0; i < n; i++){
		if(Phi[i] == -1){PLCP[i] = 0; continue;}
		while(T[i+L] == T[Phi[i]+L]) L++;
		PLCP[i] = L;
		L = max(L-1, 0);
	}
	for(i = 0; i < n; i++) LCP[i] = PLCP[SA[i]];
}

void prettyPrint(){
	char A[MAXN];  
	for(int i = 0; i < n; i++){
		memcpy(A, T+SA[i], n-SA[i]); A[n-SA[i]] = '\0';
		cerr << i << ": " << SA[i] << ": " << LCP[i] << ": " << A << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int m, i, j;
	while(cin >> m, m){
		cin >> T;
		n = strlen(T);
		T[n++] = '$';
		if(m == 1) {
			cout << n - 1 << " " << 0 << endl;
			continue;
		}
		constructSA();
		computeLCP();
		create_rmq_table(LCP, n);
		create_rmq_table2(SA, n);
		
		int mm = -1, msa = -1;
		for(i = 1; i + m - 2 < n; i++){
			int aux = LCP[rmq(LCP, n, i, i+m-2)];
			if(aux >= mm){
				if(aux > mm) msa = SA[rmq2(SA, n, i-1, i+m-2)];
				else msa = max(SA[rmq2(SA, n, i-1, i+m-2)], msa);
				mm = aux;
			}
		}
		if(msa == -1 || mm < 1) cout << "none" << endl;
		else cout << mm << " " << msa << endl;
	}
}
