#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
#define F first
#define S second

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
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

struct Point {
	int y, oy, x, ox, t;
	Point(int x, int y, int t) : y(y), oy(0), x(x), ox(0), t(t) {}
};

bool cmpx(Point a, Point b){
	if(a.x == b.x && a.ox == b.ox && a.y == b.y) return a.oy < b.oy;
	else if(a.x == b.x && a.ox == b.ox) return a.y < b.y;
	else if(a.x == b.x) return a.ox < b.ox;
	return a.x < b.x;
}

bool cmpy(Point a, Point b){
	if(a.y == b.y && a.oy == b.oy && a.x == b.x) return a.ox < b.ox;
	else if(a.y == b.y && a.oy == b.oy) return a.x < b.x;
	else if(a.y == b.y) return a.oy < b.oy;
	return a.y < b.y;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie();
	vector<Point> P;
	map<ii, int> N;
	int T, y, x, p, w, n, m, i, pn;
	cin >> T;
	while(T--){
		s = 0; t = 1;
		for(i = 0; i < MAXN; i++) ady[i].clear();
		P.clear();
		N.clear();
		memset(res, 0, sizeof res);
				
		cin >> n >> m >> p;
		for(i = 0; i < p; i++){
			cin >> x >> y;
			P.push_back(Point(x, y, 0));
		}
		cin >> w;
		for(i = 0; i < w; i++){
			cin >> x >> y;
			P.push_back(Point(x, y, 1));
		}
		pn = w + p;
		sort(P.begin(), P.end(), cmpy);
		int cur = 0, off = 0;
		for(i = 0; i < pn; i++){
			if(P[i].y > cur){
				off = 0;
				cur = P[i].y;
			}
			off += P[i].t;
			P[i].oy = off;
		}
		
		sort(P.begin(), P.end(), cmpx);
		cur = off = 0;
		for(i = 0; i < pn; i++){
			if(P[i].x > cur){
				off = 0;
				cur = P[i].x;
			}
			off += P[i].t;
			P[i].ox = off;
		}
		
		off = 2;
		for(i = 0; i < pn; i++){
			if(P[i].t) continue;
			ii v = ii(P[i].x, P[i].ox);
			if(N.find(v) == N.end()) N[v] = off++;
			P[i].x = N[v];
		}
		
		for(i = 0; i < pn; i++){
			if(P[i].t) continue;
			ii v = ii(1000 + P[i].y, P[i].oy);
			if(N.find(v) == N.end()) N[v] = off++;
			P[i].y = N[v];
		}
		
		for(i = 0; i < pn; i++){
			if(P[i].t) continue;
			res[s][P[i].x] = 1;
			res[P[i].x][P[i].y] = 1;
			res[P[i].y][t] = 1;
			ady[s].push_back(P[i].x);
			ady[P[i].x].push_back(s);
			ady[P[i].y].push_back(P[i].x);
			ady[P[i].x].push_back(P[i].y);
			ady[P[i].y].push_back(t);
			ady[t].push_back(P[i].y);
		}
		cout << max_flow() << endl;
		
	}
}
