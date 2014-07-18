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
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) for(i = 0; i < n; i++)
#define for1(i,n) for(i = 1; i <= n; i++)
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define _TL(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define _TU(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define SQ(x) ((x)*(x))
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;

int dist(ii a, ii b){
	return (abs(b._F-a._F)) + (abs(b._S-a._S));
}

int main(){
	int T, n, i, j, c, b, pe[11]={0,1,2,3,4,5,6,7,8,9,10};
	ii a[22], me;
	int m[22][22], mn, ac;
	scd(T);
	while(T--){
		scd2(c, b);
		scd2(me._F, me._S);
		scd(n);
		for0(i, n){
			scd2(a[i]._F, a[i]._S);
		}
		for0(i, n){
			for0(j, n){
				m[i][j] = dist(a[i], a[j]);
				//printf("%d\t", m[i][j]);
			}
			//prnl();
		}
		sort(pe, pe+n);
		mn = 99999999;
		do {
			ac = dist(me, a[pe[0]]);
			for(i = 1; i < n; i++){
				ac += m[pe[i]][pe[i-1]];
			}
			ac += dist(a[pe[n-1]], me);
			mn = min(mn, ac);
		} while(next_permutation(pe, pe+n));
		printf("The shortest path has length %d\n", mn);
	}
}










