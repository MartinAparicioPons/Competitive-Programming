#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
const int MAXN = 10010;

vi G[MAXN];
bool vis[MAXN];

void dfs(int v){
	for(int i = 0; i < G[v].size(); i++){
		if(!vis[G[v][i]]){
			vis[G[v][i]] = true;
			dfs(G[v][i]);
		}
	}
}

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, m, i, a, b, T, r;
	cin >> T;
	while(T--){
		cin >> n >> m;
		memset(vis, 0, sizeof vis);
		for(i = 1; i <= n; i++) G[i].clear();
		for(i = 0; i < m; i++){
			cin >> a >> b;
			G[a].push_back(b);
			G[b].push_back(a);
		}
		for(i = 1, r = 0; i <= n; i++){
			if(vis[i]) continue;
			vis[i] = true;
			r++;
			dfs(i);
		}
		cout << (r*(r-1))/2 << "\n";
	}
}
