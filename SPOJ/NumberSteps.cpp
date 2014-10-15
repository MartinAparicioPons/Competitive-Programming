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

const int MAX = 10010;

int main() {
	map<ii, int> pre;
	ii p, h;
	int x, y, n, i = 0, j = 0, r = 0, b = 0;
	while(i < MAX && j < MAX){
		pre.insert(MT(i, j, r++));
		b = (b >= 4)?0:b;
		if(b%2 == 0) {
			b++; i++; j++;
		} else if(b == 1) {
			b++; i++; j--;
		} else if(b == 3) {
			b++; i--; j++;
		}
	}
	cin >> n;
	for0(i, n){
		cin >> x >> y;
		if(x == y || x == y+2){
			p = MP(x, y);
			cout << (pre.find(p)->second) << endl;
		} else {
			printf("No Number\n");
		}
	}
}
