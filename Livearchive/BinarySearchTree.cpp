#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
	#define endl "\n"
#else
	#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
	#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
	#define EL cerr << endl;
#endif
#define EPS 1e-11
#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) | (1<<(x)))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))

using namespace std;		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 1010, MOD = 9999991;


ll F[MX][MX];
int A[MX], L[MX], R[MX];

pair<ll, int> r(int i){
	if(i == -1) return {0, 0};
	if(L[i] == -1 && R[i] == -1) return {1, 1};
	if(L[i] == -1) {
		ii a = r(R[i]);
		return {a.X, a.Y+1};
	}
	if(R[i] == -1) {
		ii a = r(L[i]);
		return {a.X, a.Y+1};
	}
	// Both childs
	ii a = r(L[i]), b = r(R[i]);
	return {(((a.X * b.X) % MOD) * F[a.Y][b.Y]) % MOD, a.Y + b.Y + 1};
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t, i, j, n, k;
	memset(F, -1, sizeof F);
	F[1][1] = 2;
	for(i = 2; i < MX; i++) {
		F[i][1] = i+1;
		F[1][i] = i+1;
	}
	for(i = 2; i < MX; i++){
		for(j = 2; j < MX; j++){
			F[i][j] = F[i-1][j] + F[i][j-1];
		}
	}
	
	cin >> t;
	while(t--){
		cin >> n;
		for(i = 0; i < n; i++) cin >> A[i];
		fill(L, L+n, -1);
		fill(R, R+n, -1);
		for(i = 1; i < n; i++){
			int d = 0, p = -1;
			while(d != -1){
				p = d;
				if(A[i] < A[d]) d = L[d];
				else d = R[d];
			}
			if(A[i] < A[p]){
				L[p] = i;
			} else {
				R[p] = i;
			}
		}
		cout << r(0).X << endl;
	}
}

