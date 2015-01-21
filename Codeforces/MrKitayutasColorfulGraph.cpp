#include <bits/stdc++.h>
using namespace std;

const int MAXN = 111;

int i, j, a, b, c, u, v, n, m, q, R;
vector< pair<int, int> > V[MAXN], C;
pair<int, int> aux;
bool vis[MAXN];

bool dfs(int u, int v, int c){
	if(u == v) return true;
	vis[u] = true;
	bool sol = false;
	for(int j = 0; j < V[u].size(); j++){
		aux = V[u][j];
		if(!vis[aux.first] && aux.second == c){
			sol = sol || dfs(aux.first, v, c);
		}
	}
	return sol;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin >> n >> m;
	for(i = 0; i < m; i++){
		cin >> a >> b >> c;
		V[a].push_back(make_pair(b, c));
		V[b].push_back(make_pair(a, c));
	}
	cin >> q;
	for(i = 0; i < q; i++){
		cin >> u >> v;
		R = 0;
		for(c = 1; c <= m; c++){
			memset(vis, 0, sizeof vis);
			if(dfs(u, v, c)){
				R++;
			}
		}
		cout << R << endl;
	}
}
