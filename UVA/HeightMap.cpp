#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
#else
	#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
	#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
	#define EL cerr << endl;
#endif
#define EPS 1e-11
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
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 110, MOD = 1000000007ll;

int M[MX][MX], m, n;
bool V[MX][MX];
ii K[4] = {{1,0},{0,1},{-1,0},{0,-1}};

void dfs(int x, int y){
	if(x >= n || y >= m || y < 0 || x < 0) return;
	for(ii k : K) {
		int i = x+k.X,
			j = y+k.Y;
		if(M[i][j] == M[x][y] && !V[i][j]){
			V[i][j] = true;
			dfs(i, j);
		}
	}
}

int main(){
	int r, c, i, j;
	while(cin >> n >> m){
		for(i = 0; i < n; i++) for(j = 0; j < m; j++) cin >> M[i][j];
		r = 0;
		memset(V, 0, sizeof V);
		for(i = 0; i < n; i++) for(j = 0; j < m; j++){
			if(j < m-1 && M[i][j] != M[i][j+1]) r++;
			if(i < n-1 && M[i][j] != M[i+1][j]) r++;
			if(i < n-1 && j < m-1){
				if(M[i][j] < M[i+1][j] && M[i][j+1] < M[i+1][j+1] && min(M[i+1][j], M[i+1][j+1]) > max(M[i][j], M[i][j+1])) r--;
				else if(M[i][j] > M[i+1][j] && M[i][j+1] > M[i+1][j+1] && max(M[i+1][j], M[i+1][j+1]) < min(M[i][j], M[i][j+1])) r--;
				else if(M[i][j] < M[i][j+1] && M[i+1][j] < M[i+1][j+1] && min(M[i][j+1], M[i+1][j+1]) > max(M[i][j], M[i+1][j])) r--;
				else if(M[i][j] > M[i][j+1] && M[i+1][j] > M[i+1][j+1] && max(M[i][j+1], M[i+1][j+1]) < min(M[i][j], M[i+1][j])) r--;
			}
		}
		for(i = 0; i < n; i++) for(j = 0; j < m; j++) if(!V[i][j]) {
			r++;
			V[i][j] = true;
			dfs(i, j);
		}
		cout << r+5 << endl;
	}
}

