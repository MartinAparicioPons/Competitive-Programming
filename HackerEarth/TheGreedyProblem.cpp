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

ll dp[110][110], n, m, a[110][110];

ll rec(int i, int j){
	if(j < 0 || j >= m || i > (n-1)) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	if(i == n-1){
		dp[i][j] = a[i][j];
		return a[i][j];
	}
	dp[i][j] = a[i][j] + max(max(rec(i+1, j-1), rec(i+1, j)),rec(i+1, j+1));
	return dp[i][j];
}

int main() {
	int i, j, T;
	ll r;
	cin >> T;
	while(T--){
		cin >> n >> m;
		memset(dp, -1, sizeof dp);
		for0(i, n){
			for0(j, m){
				cin >> a[i][j];
			}
		}
		r = 0;
		for0(j, m){
			r = max(r, rec(0, j));
		}
		cout << r << endl;
	}
}
/*
2
3 3
5 3 2
9 7 5
1 2 10
3 3
1 2 0
5 3 1
3 9 2
*/
