#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
#define F first
#define S second

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 250, MAX = INT_MAX;



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
	int T, tc = 1, n, m, i, a, b, c;
	cin >> T;
	while(T--){
		cin >> n;
		memset(res, 0, sizeof res);
		s = 0; t = MAXN-1;
		for(i = 0; i <= t; i++) ady[i].clear();
		for(i = 1; i <= n; i++){
			a = (i*2)-1; b = a+1;
			cin >> res[a][b];
			ady[a].push_back(b);
			ady[b].push_back(a);
		}
		cin >> m;
		for(i = 0; i < m; i++){
			cin >> a >> b >> c;
			a = a*2; b = (b*2)-1;
			res[a][b] = c;
			ady[a].push_back(b);
			ady[b].push_back(a);
		}
		cin >> a >> b;
		for(i = 0; i < a; i++){
			cin >> c;
			c = (c*2)-1;
			res[s][c] = MAX;
			ady[s].push_back(c);
			ady[c].push_back(s);
		}
		for(i = 0; i < b; i++){
			cin >> c;
			c*=2;
			res[c][t] = MAX;
			ady[c].push_back(t);
			ady[t].push_back(c);
		}
		printf("Case %d: %d\n", tc++, max_flow());
	}
}
