#include <bits/stdc++.h>
using namespace std;
 
int main(){
	bool ok;
	int n, i, a, b, m, c[202], j;
	queue<int> q;
	while(cin >> n, n != 0){
		vector<int> adj[202];
		while(!q.empty()) q.pop();
		cin >> m;
		ok = true;
		memset(c, 0, sizeof c);
		for(i = 0; i < m; i++){
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		q.push(0);
		c[0] = 1;
		while(!q.empty()){
			a = q.front(); q.pop();
			for(j = 0; j < adj[a].size(); j++){
				b = adj[a][j];
				if(!c[b]){
					c[b] = -1 * c[a];
					q.push(b);
				} else if(c[b] == c[a]){
					ok = false;
					break;
				}
			}
		}
		if(ok) printf("BICOLORABLE.\n");
		else printf("NOT BICOLORABLE.\n");
	}
}
