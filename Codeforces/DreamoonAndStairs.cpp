#include <bits/stdc++.h>
#define for0(i, n) for(i = 0; i < n; i++)
#define fora(i, a, n) for(i = a; i < n; i++)
#define dprc(x) printf("| %c\n", x)
#define dprd(x) printf("| %d\n", x)
#define dprd2(x,y) printf("| %d %d\n", x, y)
#define NL() printf("\n")
#define _MP make_pair
#define _MT(x, y, z) _MP(_MP(x, y), z)
#define _MTi(x, y, z) _MP(x, _MP(y, z))
#define SE second
#define FI first
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	int a, b, c, i, r=0;
	cin >> a >> b;
	if(a < b) cout << -1 << endl;
	else {
		i = a%2;
		for(i += a/2; i <= a; i++){
			if(i%b == 0){
				r = i;
				break;
			}
		}
		if(r == 0){
			 cout << -1 << endl;
		}else {
			 cout << r << endl;
		}
	}
}
