#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl
#define F first
#define S second

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef vector<ii> vii;
const int MAXN = 1010;

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
	ios_base::sync_with_stdio(0); cin.tie(0);
	int a, b, i, j, T, n, m;
	ii A[MAXN];
	scanf("%d", &T);
	while(T--){
		scanf("%d %d", &n, &m);
		s = 0; t = 1;
		for(i = 0; i < MAXN; i++) ady[i].clear();
		memset(res, 0, sizeof res);
		for(i = 2; i < n+2; i++){
			scanf("%d:%d", &a, &b);
			A[i].F = a*60+b;
			scanf("%d:%d", &a, &b);
			A[i].S = a*60+b;
			
			ady[s].push_back(i);
			ady[i].push_back(s);
			res[s][i] = 1;
		}
		for(;i < m+n+2; i++){
			scanf("%d:%d", &a, &b);
			A[i].F = a*60+b;
			scanf("%d:%d", &a, &b);
			A[i].S = a*60+b;
			
			ady[t].push_back(i);
			ady[i].push_back(t);
			res[i][t] = 1;
		}
		for(i = 2; i < n+2; i++){
			for(j = n+2; j < m+n+2; j++){
				if(A[i].F <= A[j].F && A[i].S >= A[j].S){
					ady[i].push_back(j);
					ady[j].push_back(i);
					res[i][j] = 1;
				}
			}
		}
		printf("%d\n", max_flow());
	}
}
