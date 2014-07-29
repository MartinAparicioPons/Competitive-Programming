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
#define cin1(a) cin >> a
#define cin2(a, b) cin >> a >> b
#define pr(a) cout << a
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
	int c, s, i, a[15], T=1;
	ii b[15];
	double im, pr;
	while(scd2(c, s) != EOF){
		pr = 0.0;
		for0(i, s){
			scd(a[i]);
			pr += a[i];
		}
		pr /= c;
		while(s < 2*c){
			a[s++] = 0;
		}
		sort(a, a+s);
		for(im = 0, i = 0; 2*i < s; i++){
			b[i]._F = a[i];
			b[i]._S = a[s - 1 - i];
			im += fabs((double)(b[i]._F + b[i]._S) - pr);
		}
		printf("Set #%d\n", T++);
		for(i = 0; i < c; i++){
			printf(" %d:", i);
			if(b[i]._F != 0)
				printf(" %d", b[i]._F);
			if(b[i]._S != 0)
				printf(" %d\n", b[i]._S);
			else
				prnl();
		}
		printf("IMBALANCE = %.5f\n\n", im);
	}
	
}










