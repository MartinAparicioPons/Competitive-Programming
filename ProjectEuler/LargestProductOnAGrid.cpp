#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll; typedef unsigned long long ull;
typedef int tint; typedef pair<tint, tint> ii;
const int MAXN = 22;

short n, m, M[MAXN][MAXN], 
	V[8][2] = {{1,0},{0, 1},{-1,0},{ 0,-1},
			   {1,1},{1,-1},{-1,1},{-1,-1}};

int tran(int i, int j, int v){
	int k, r = 1;
	for(k = 0; k < 4; k++){
		i += V[v][0]; j += V[v][1];
		if(i < 0 || j < 0 || i >= n || j >= m) return -1;
		r *= M[i][j];
	}
	return r;
}

int solve(){
	int i, j, v, r = -1;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			for(v = 0; v < 8; v++){
				r = max(r, tran(i, j, v));
			}
		}
	}
	return r;
}

int main(){
	ios_base::sync_with_stdio(0);
	int i, j;
	cin >> n >> m;
	for(i = 0; i < n; i++) for(j = 0; j < m; j++) cin >> M[i][j];
	cout << solve() << endl;
}
