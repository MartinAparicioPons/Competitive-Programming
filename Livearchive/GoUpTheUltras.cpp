#include <bits/stdc++.h>
#ifdef DEBUG
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define EL cerr << endl;
#else
#define DB(x)
#define DBL(x)
#define EL
#endif

#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()


using namespace std;
typedef long double ld; 	typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string;		typedef set<int> si;
const static int MAXN = 100001;

int n, H[MAXN], PR[MAXN], NX[MAXN];
vi P;

int RMQ[MAXN][40];

/// RMQ
void create_rmq_table (int A[], int n) {
	int i, j;
	for (i=0; i<n; i++) RMQ[i][0] = i;
	for (j=1; (1<<j)<=n; j++) {
		for (i=0; i+(1<<j)-1<n; i++) {
			if (A[RMQ[i][j-1]] <= A[RMQ[i+(1<<(j-1))][j-1]]) RMQ[i][j] = RMQ[i][j-1];
			else RMQ[i][j] = RMQ[i+(1<<(j-1))][j-1];
		}
	}
}

inline int log2(int x){
	return (int)floor(log((double)x) / log(2.0));
}
int rmq (int A[], int n, int i, int j) {
	if(i < 0 || j < i) return 0;
	j = min(j, n);
	int k = log2(j-i+1); 
	if (A[RMQ[i][k]] <= A[RMQ[j-(1<<k)+1][k]]) return RMQ[i][k];
	else return RMQ[j-(1<<k)+1][k];
}


int main(){
	int i, j;
	while(cin >> n){
		memset(PR, 0, sizeof PR);
		memset(NX, 0, sizeof NX);
		memset(H, 0, sizeof H);
		memset(RMQ, 0, sizeof RMQ);
		P.clear();
		for(i = 0; i < n; i++){
			cin >> H[i];
		}
		for(i = 1; i+1 < n; i++){
			if(H[i-1] < H[i] && H[i] > H[i+1]){
				P.PB(i);
			}
		}
		stack<int> Prev;
		for(int p = 0; p < P.size(); p++){
			while(!Prev.empty() && H[P[Prev.top()]] <= H[P[p]]){
				Prev.pop();
			}
			if(Prev.empty()) PR[p] = -1;
			else 			 PR[p] = P[Prev.top()];
			Prev.push(p);
		}
		while(!Prev.empty()) Prev.pop();
		for(int p = P.size()-1; p >= 0; p--){
			while(!Prev.empty() && H[P[Prev.top()]] <= H[P[p]]){
				Prev.pop();
			}
			if(Prev.empty()) NX[p] = -1;
			else 			 NX[p] = P[Prev.top()];
			Prev.push(p);
		}
		create_rmq_table(H, n);
		vi U; U.clear();
		for(int p = 0; p < P.size(); p++){
			int pr, nx;
			if(PR[p] == -1) pr = 0;
			else pr = H[rmq(H, n, PR[p], P[p])];
			if(NX[p] == -1) nx = 0;
			else nx = H[rmq(H, n, P[p], NX[p])];
			if((H[P[p]] - max(pr, nx)) >= 150000){
				U.PB(P[p] + 1);
			}
		}
		for(int u = 0; u < U.size(); u++) cout << U[u] << " \n"[u+1==U.size()];
	}
}
