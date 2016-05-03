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
const static int MAXN = 22;

int M[MAXN][MAXN], n, DP[MAXN][70001];

int dp(int x, int m){
	if(x >= n) return 0;
	if(DP[x][m] == -1){
		int b = 0;
		for(int i = 0; i < n; i++){
			if((m & (1<<i)) == 0){
				b = max(b, M[x][i] + dp(x+1, m | (1<<i)));
			}
		}
		DP[x][m] = b;
	}
	return DP[x][m];
}

int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0);
	int t, tc = 1, i, j;
	scanf("%d", &t);
	while(t--){
		memset(DP, -1, sizeof DP);
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				scanf("%d", &M[i][j]);
			}
		}
		
		printf("Case %d: %d\n", tc++, dp(0, 0));
	}
}
