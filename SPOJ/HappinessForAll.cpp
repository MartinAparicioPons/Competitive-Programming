#include <bits/stdc++.h>
#define EPS 1e-11
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

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
const static ll MX = 100010;

ll n, m, r, e;
vi G[MX];
bool V[MX];

ii dfs(int x){
	V[x] = true;
	ii a = {G[x].size(), 1};
	for(int y : G[x]) if(!V[y]){
		V[y] = true;
		ii b = dfs(y);
		a.X += b.X;
		a.Y += b.Y;
	}
	return a;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j, a, b;
	while(cin >> n >> m >> r >> e){
		for(i = 0; i < MX; i++) G[i].clear();
		memset(V, 0, sizeof V);
		for(i = 0; i < m; i++){
			cin >> a >> b;
			G[a].PB(b);
			G[b].PB(a);
		}
		queue<int> Q;
		ll res = 0;
		for(i = 1; i <= n; i++) if(!V[i]){
			ii d = dfs(i);
			res += min(((d.Y*(d.Y-1)/2) - (d.X/2)) * r, d.Y * e);
		}
		cout << res << endl;
	}
}

