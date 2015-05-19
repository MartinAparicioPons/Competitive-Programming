#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
#define F first
#define S second

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 1550, OFF = 1100;

int res[MAXN][MAXN], mf, f, s, t, level[MAXN];
vector<int> ady[MAXN];

bool bfs () {
	queue<int> q; q.push(s);
	memset(level, -1, sizeof level);
	level[s] = 0;
	int u, v;
	while (!q.empty()) {
		u = q.front(); q.pop();
		for (int i=0; i<(int)ady[u].size(); i++) {
			v = ady[u][i];
			if (level[v] == -1 && res[u][v] > 0) {
				level[v] = level[u] + 1;
				q.push(v);
				if (v == t) return true;
			}
		}
	}
	return false;
}

int dfs (int u, int min_edge) {
	if (u == t) return min_edge;
	int v, faux, fsum = 0;
	for (int i=0; i<(int)ady[u].size(); i++) {
		v = ady[u][i];
		if (res[u][v] > 0 && level[v] == level[u] + 1) {
			faux = dfs(v, min(min_edge, res[u][v]));
			if (faux) {
				fsum += faux;
				res[u][v] -= faux;
				res[v][u] += faux;
				min_edge -= faux;
				if (min_edge == 0) break;
			}
		}
	}
	return fsum;
}

int max_flow () {
	mf = 0;
	while (bfs()) mf += dfs(s, INT_MAX);
	return mf;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie();
	int n, m, i, j, a, b, c;
	while(cin >> n >> m, n || m){
		s = c = 0; t = MAXN-1;
		memset(res, 0, sizeof res);
		for(i = 0; i < MAXN; i++) ady[i].clear();
		for(i = OFF; i < OFF+n; i++){
			cin >> a;
			c += a;
			res[i][t] = a;
			ady[i].push_back(t);
			ady[t].push_back(i);
		}
		for(i = 1; i <= m; i++){
			cin >> a;
			res[s][i] = 1;
			ady[s].push_back(i);
			ady[i].push_back(s);
			while(a--){
				cin >> b;
				b = b + OFF - 1;
				res[i][b] = 1;
				ady[i].push_back(b);
				ady[b].push_back(i);
			}
		}
		if(max_flow() == c){
			cout << "1\n";
			for(i = OFF; i < OFF+n; i++){
				for(j = 0, a = 0; j < ady[i].size(); j++){
					if(res[i][ady[i][j]] == 1){
						if(a) cout << " ";
						a = 1;
						cout << ady[i][j];
					}
				}
				cout << "\n";
			}
		} else {
			cout << "0\n";
		}
	}
}
