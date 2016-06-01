#include <bits/stdc++.h>
#define EPS 1e-11
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
#else
	#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
	#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
	#define EL cerr << endl;
#endif
#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) | (1<<(x)))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))

using namespace std; 		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 30010;

vi G[MX];
int n, N[MX];
ll DP[MX];

ll dp(int x){
	if(x == n) return 1ll;
	if(DP[x] == -1ll){
		ll r = 0;
		for(int y : G[x]){
			r += dp(y);
		}
		DP[x] = r;
	}
	return DP[x];
}

ll DFS[MX];

ll dfs(int x){
	if(x == n) return dp(x);
	if(DFS[x] == -1){
		ll r = 0, m = 0;
		for(int y : G[x]) {
			m = max(m, dfs(y));
		}
		DFS[x] = dp(x) + m;
	}
	return DFS[x];
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j, s, a, b;
	while(cin >> n >> s){
		memset(DP, -1, sizeof DP);
		memset(DFS, -1, sizeof DFS);
		for(i = 0; i < MX; i++) G[i].clear();
		for(i = 0; i < s; i++){
			cin >> a >> b;
			G[a].PB(b);
		}
		cout << dfs(1) << endl;
	}
}



