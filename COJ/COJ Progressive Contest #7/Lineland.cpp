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
#define for0(i,n) fora(i, 0, n)
#define for1(i,n) for(i = 1; i <= n; i++)
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define _TL(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define _TU(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;
#define MAX 1000005


int main(){
	int n, a, b, m, mi, i, j, x[MAX], c[MAX];
	vii p;
	while(scd(n) != EOF){
		p.clear();
		for0(i, n){
			scd2(a, b);
			p.push_back(_MP(a, b-1));
		}
		sort(p.begin(), p.end());
		for0(i, n){
			x[i] = p[i]._F;
			c[i] = p[i]._S;
		}
		m = (upper_bound(x, x+n, x[0]+c[0]) - x) - 1;
		mi = x[0];
		for(i = 1; i < n-1; i++){
			b = (upper_bound(x, x+n, x[i] + c[i]) - x) - (i + 1);
			if(m < b){
				m = b;
				mi = x[i];
			}
		}
		prd2(mi, m);
	}
}










