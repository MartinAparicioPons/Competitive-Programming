#include <bits/stdc++.h>
#define for0(i, n) for(i = 0; i < n; i++)
#define for1(i, n) for(i = 1; i <= n; i++)
#define fora(i, a, n) for(i = a; i < n; i++)
#define dprc(x) printf("| %c\n", x)
#define dprd(x) printf("| %d\n", x)
#define dprd2(x,y) printf("| %d %d\n", x, y)
#define scd(x) scanf("%d", &x)
#define scd2(x, y) scanf("%d%d", &x, &y)
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
	int T, n, m[1020], w[1020], i, r;
	cin >> T;
	while(T--){
		r = 0;
		cin >> n;
		for0(i, n){
			cin >> m[i];
		}
		for0(i, n){
			cin >> w[i];
		}
		sort(m, m+n);
		sort(w, w+n);
		for0(i, n){
			r+=m[i]*w[i];
		}
		cout << r << endl;
	}
}
