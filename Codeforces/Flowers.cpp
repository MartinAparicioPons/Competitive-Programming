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

const int MAX = 100100;
const int MOD = 1000000007;

int main() {
	int a[MAX+10], n, k, i, j, t;
	cin >> t >> k;
	a[0] = 1;
	for1(i, MAX){
		a[i] = a[i-1];
		if(i >= k) a[i] = (a[i] + a[i-k])%MOD;
	}
	for(i = 1; i < MAX; i++){
		a[i] = (a[i] + a[i-1])%MOD;
	}
	while(t--){
		cin >> j >> n;
		cout << ((a[n] - a[j-1])%MOD + MOD)%MOD << endl;
	}
}








