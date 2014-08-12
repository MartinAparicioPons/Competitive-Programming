#include <cstdio>
#include <cctype>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <locale>
#include <cmath>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define dprd(x) printf("|| %d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define dprd2(x,y) printf("||%d | %d\n", x,y)
#define prnl() printf("\n")
#define prc(c) printf("%c\n", c)
#define for0(i,n) for(i = 0; i < n; i++)
#define for1(i,n) for(i = 1; i <= n; i++)
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define SQ(x) ((x)*(x))
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;


int main(){
	int T, n, a[104], cant, prom, r1, r2, i;
	cin >> T;
	while(T--){
		cant = 0;
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> a[i];
			cant += a[i];
		}
		prom = cant / n;
		r1 = cant % n;
		for(r2 = 0, i = 0; i < n; i++){
			if(a[i] != prom){
				r2 += abs(a[i] - prom);
			}
		}
		r2 = (r2 - r1)/2;
		cout << r1 << " " << r2 << endl;
	}
}









	
