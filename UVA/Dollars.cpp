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

int v[11]={5,10,20,50,100,200,500,1000,2000,5000,10000};
ll w[12][30010];

ll ways(int t, int m){
	if(m == 0)  return 1;
	if(t >= 11) return 0;
	if(m <  0)  return 0;
	if(w[t][m] != -1) return w[t][m];
	ll x = (ways(t+1, m) + ways(t, m-v[t]));
	w[t][m] = x;
	return x;
}

int main(){
	int a, b, c, i;
	ll j;
	memset(w, -1, sizeof w);
	while(scanf("%d.%d", &c, &b), c || b){
		a = c*100+b;
		j = ways(0, a);
		printf("%3d.%02d%17lld\n", c, b, j);
	}
}










