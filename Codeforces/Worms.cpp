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
	int a[100100]={0}, i, n, m, c, r ;
	cin >> n;
	for1(i, n){
		cin >> c;
		a[i] = a[i-1] + c;
	}
	for1(i, n) a[i]++;
	cin >> m;
	for0(i, m){
		cin >> c;
		r = upper_bound(a, a+n, c) - a;
		if(a[r] == c) r--;
		cout << r << endl;
	}
}
