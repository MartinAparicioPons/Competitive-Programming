#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10010;

int n, P, Pi;
vector<int> E[MAXN];
bool vis[MAXN];

void dfs(int u, int p){
	if(vis[u]) return;
	vis[u] = true;
	if(p > P){
		P = p; 
		Pi = u;
	}
	for(int i = 0; i < E[u].size(); i++){
		dfs(E[u][i], p + 1);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	int T, i, u, v;
	cin >> T;
	while(T--){
		cin >> n;
		if(n <= 0){
			cout << 0 << endl;
			continue;
		}
		for(i = 0; i <= n; i++){
			E[i].clear();
		}
		for(i = 0; i < n-1; i++){
			cin >> u >> v;
			E[u].push_back(v);
			E[v].push_back(u);
		}
		memset(vis, 0, sizeof vis);
		P = 0;
		dfs(1, 0);
		memset(vis, 0, sizeof vis);
		P = 0;
		dfs(Pi, 0);
		cout << P << endl;
	}
}

