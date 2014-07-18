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

int main(){
	int a[101][101]={0}, n, i, j, k, l, p, m=-999999999;
	scd(n);
	for1(i, n){
		for1(j, n){
			scd(a[i][j]);
			a[i][j] += a[i-1][j];
			a[i][j] += a[i][j-1];
			a[i][j] -= a[i-1][j-1];
		}
	}
	
	for1(i, n){
		for1(j, n){
			for(k=i; k <= n; k++){
				for(l=j; l <= n; l++){
					p = a[k][l];
					p -= a[i-1][l];
					p -= a[k][j-1];
					p += a[i-1][j-1];
					m = max(m, p);
				}
			}
		}
	}
	prd(m);
}










