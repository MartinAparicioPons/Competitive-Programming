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
typedef long long ll;       typedef pair<int, int> ii; 
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 100100;

char T[MAXN];
int n, RA[MAXN], TRA[MAXN], SA[MAXN], TSA[MAXN];
int C[MAXN], Phi[MAXN], PLCP[MAXN], LCP[MAXN];

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

int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0);
    int tc;
    scanf("%d\n", &tc);
    while(tc--){
		n = (int)strlen(gets(T));
		T[n++] = '$';
		constructSA();
		computeLCP();
		ll r = 0ll;
		for(int i = 0; i < n; i++){
			r += (n-SA[i]-1ll) - LCP[i];
		}
		cout << r << endl;
	}
}
