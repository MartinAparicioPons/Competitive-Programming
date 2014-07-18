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
#define for0(i,n) fora(i, 0, n)
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
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;

int t, m, n, k, l[22][22], j, i, p[222][22];

int f(int a, int b){
	int i, j;
	if(a <  0) return -100;
	if(b == n) return m - a;
	if(p[a][b] != -1) return p[a][b];
	j = -1;
	for(i=1; i <= l[b][0]; i++){
		j = max(j, f(a-l[b][i], b+1));
	}
	p[a][b] = j;
	return j;
}

int main(){
	scd(t);
	while(t--){
		scd2(m, n);
		for0(i, n){
			scd(l[i][0]);
			for1(j, l[i][0]){
				scd(l[i][j]);
			}
		}
		memset(p, -1, sizeof p);
		k = f(m, 0);
		if(k < 0){
			printf("no solution\n");
		} else {
			prd(k);
		}
	}
}










