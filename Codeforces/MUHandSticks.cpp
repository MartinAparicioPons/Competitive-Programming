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
	int a[6], i, r=0;
	for0(i, 6){
		cin >> a[i];
	}
	sort(a, a+6);
	fora(i, 3, 6){
		if(a[i] == a[i-1] && a[i] == a[i-2] && a[i] == a[i-3])r=i;
	}
	if(r == 0){
		cout << "Alien\n";
		return 0;
	}
	if(a[(r+1)%6] == a[(r+2)%6]){
		cout << "Elephant\n";
		return 0;
	} else {
		cout << "Bear\n";
		return 0;
	}
}
