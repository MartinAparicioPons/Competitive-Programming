#include <bits/stdc++.h>
#define for0(i, n) for(i = 0; i < n; i++)
#define for1(i, n) for(i = 1; i <= n; i++)
#define fora(i, a, n) for(i = a; i < n; i++)
#define dprc(x) printf("| %c\n", x)
#define dprd(x) printf("| %d\n", x)
#define dprd2(x,y) printf("| %d %d\n", x, y)
#define NL() printf("\n")
#define MP make_pair
#define MT(x, y, z) _MP(_MP(x, y), z)
#define MTi(x, y, z) _MP(x, _MP(y, z))
#define X first
#define Y second
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	int i, j, k, l, n, m, T, d[2][4]={{0,1,0,-1},{1,0,-1,0}};
	char x[110][110]={'#'};
	ii ini, fin, act, next;
	bool ok, vis[110][110];
	stack<ii> q;
	cin >> T;
	while(T--){
		memset(vis, false, sizeof vis);
		cin >> n >> m;
		getchar();
		for0(i, n){
			for0(j, m){
				x[i][j] = getchar();
				if(x[i][j]=='b')
					ini=MP(i,j);
				if(x[i][j]=='g')
					fin=MP(i,j);
			}
			getchar();
		}
		
		ok = false;
		q.push(ini);
		while(!q.empty()){
			act = q.top(); q.pop();
			vis[act.X][act.Y] = true;
			for(i = 0; i < 4; i++){
				next = MP(act.X + d[0][i], act.Y + d[1][i]);
				if(x[next.X][next.Y] == '.' && !vis[next.X][next.Y]){
					q.push(next);
					vis[next.X][next.Y] = true;
				}
				if(x[next.X][next.Y] == 'g'){
					ok = true;
				}
			}
		}
		if(ok){
			printf("Good\n");
		} else {
			printf("Bad\n");
		}
	}
}








