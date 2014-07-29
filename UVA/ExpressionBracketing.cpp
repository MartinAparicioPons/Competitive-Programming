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
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;


int main(){
	int i, n, j;
	ll cat[30], sc[30];
	memset(cat, 0, sizeof cat);
	memset(sc, 0, sizeof sc);
	cat[0] = 1; sc[0] = 1;
	cat[1] = 1; sc[1] = 1;
	for(i = 2; i <= 30; i++){
		for(j = 1; j <= i; j++){
			cat[i] += (cat[j-1] * cat[i-j]);
		}
	}
	for(i = 2; i <= 30; i++){
		sc[i] = ((6*i - 3)*sc[i-1] - (i - 2)*sc[i-2])/(i + 1);
	}
	while(scd(n) != EOF){
		n--;
		if(n == 0) prd(0);
		else printf("%lld\n", sc[n] - cat[n]);
	}
}










