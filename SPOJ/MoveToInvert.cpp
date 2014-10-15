#include <bits/stdc++.h>
#define for0(i, n) for(i = 0; i < n; i++)
#define for1(i, n) for(i = 1; i <= n; i++)
#define fora(i, a, n) for(i = a; i < n; i++)
#define dprc(x) printf("| %c\n", x)
#define dprd(x) printf("| %d\n", x)
#define dprd2(x,y) printf("| %d %d\n", x, y)
#define prd(x) printf("%d\n", x)
#define prd2(x,y) printf("%d %d\n", x, y)
#define scd(x) scanf("%d", &x)
#define scd2(x, y) scanf("%d%d", &x, &y)
#define NL() printf("\n")
#define MP make_pair
#define MT(x, y, z) MP(MP(x, y), z)
#define MTi(x, y, z) MP(x, MP(y, z))
#define X first
#define Y second
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	ll n, r, T;
	cin >> T;
	while(T--){
		scanf("%lld", &n);
		n++;
		if(n < 2)
			printf("0\n");
		else {
			printf("%lld\n", (n*(n-1))/6);
		}
	}
}
