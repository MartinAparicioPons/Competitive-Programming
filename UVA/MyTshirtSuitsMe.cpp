#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
#define F first
#define S second

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 110, MAX = INT_MAX;



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
	string S, Z;
	map<string, int> M;
	M["XS"] = 51;
	M["S"] = 52;
	M["M"] = 53;
	M["L"] = 54;
	M["XL"] = 55;
	M["XXL"] = 56;
	cin >> T;
	s = 0; t = MAXN-1;
	while(T--){
		cin >> n >> m;
		n /= 6;
		memset(res, 0, sizeof res);
		for(i = 0; i < MAXN; i++) ady[i].clear();
		for(i = 1; i <= m+1; i++){
			res[s][i] = 1;
			ady[s].push_back(i);
			ady[i].push_back(s);
		}
		for(i = 1; i <= m; i++){
			cin >> S >> Z;
			res[i][M[S]] = 1;
			res[i][M[Z]] = 1;
			ady[i].push_back(M[S]);
			ady[i].push_back(M[Z]);
			ady[M[S]].push_back(i);
			ady[M[Z]].push_back(i);
		}
		for(i = 51; i <= 56; i++){
			res[i][t] = n;
			ady[i].push_back(t);
			ady[t].push_back(i);
		}
		
		if(max_flow() == m)
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}
