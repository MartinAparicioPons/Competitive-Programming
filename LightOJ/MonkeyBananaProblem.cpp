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

#define EPS 1e-10
#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define hash dfghjk

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef set<int> si;
typedef set<ll> sll; 		typedef set<string> ss;
const static int MAXN = 555;

int M[MAXN][MAXN], DP[MAXN][MAXN], n;

int dp(int x, int y){
	if(y < 0 || M[x][y] == -1) return 0;
	if(DP[x][y] == -1){
		int o = x < n-1 ? 1 : -1;
		DP[x][y] = M[x][y] + max(dp(x+1, y), dp(x+1, y+o));
	}
	return DP[x][y];
}

int main() {
	int t, i, j, tc = 1;
	cin >> t;
	while(t--){
		memset(DP, -1, sizeof DP);
		memset(M, -1, sizeof M);
		cin >> n;
		for(i = 0; i < n; i++){
			for(j = 0; j <= i; j++){
				cin >> M[i][j];
			}
		}
		for(i = 0; i < n-1; i++){
			for(j = 0; j < n-i-1; j++){
				cin >> M[n+i][j];
			}
		}
		cout << "Case " << tc++ << ": " << dp(0,0) << endl;
	}
}
