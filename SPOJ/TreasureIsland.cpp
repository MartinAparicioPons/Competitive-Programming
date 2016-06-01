#include <bits/stdc++.h>
#define EPS 1e-11
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
#else
	#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
	#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
	#define EL cerr << endl;
#endif
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
typedef long long ll;       typedef pair<int, int> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 555, MH = 1000010;

int M[MX][MX], C, R;
ii K[4] = {{1, 0}, {-1, 0}, {0, 1}, {0,-1}};
bool V[MX][MX];

bool bfs(int m){
	queue<iii> Q;
	Q.push({m, {1, 1}});
	if(M[1][1] <= m) return false;
	V[1][1] = true;
	memset(V, 0, sizeof V);
	while(Q.size()){
		int x = Q.front().Y.X,
			y = Q.front().Y.Y,
			m = Q.front().X;
		Q.pop();
		for(ii k : K) {
			int xx = x+k.X,
				yy = y+k.Y;
			if(!V[xx][yy] && M[xx][yy] > m+1 && xx > 0 && xx <= R && yy > 0 && yy <= C) {
				V[xx][yy] = true;
				if(xx == R && yy == C && M[xx][yy] > m+1) return true;
				Q.push({m+1, {xx, yy}});
			}
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j, k;
	cin >> R >> C;
	for(i = 1; i <= R; i++){
		for(j = 1; j <= C; j++){
			cin >> M[i][j];
		}
	}
	int l = 0, r = MH, m;
	while(l < r){
		m = (l+r+1) / 2;
		memset(V, 0, sizeof V);
		if(bfs(m)){
			l = m;
		} else {
			r = m - 1;
		}
	}
	if(!l && !bfs(0)) cout << -1 << endl;
	else cout << l << endl;
}



