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
#define dprd2(x, y) printf("|| %d | %d\n", x, y)
#define prd2(x,y) printf("%d %d\n", x,y)
#define prnl() printf("\n")
#define prc(c) printf("%c\n", c)
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) fora(i, 0, n)
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
typedef pair<string, int> si;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;


int main(){
	int h, l, n, i, a, b;
	double ac;
	vi v;
	while(scanf("%d %d %d", &h, &l, &n), l || h || n){
		v.clear();
		b = 0;
		for0(i, n){
			scd(a);
			v.push_back(a);
			b+=a;
		}
		sort(v.begin(), v.end());
		for0(i, l){
			b -= v[i];
			//dprd(v[i]);
		}
		for(i=n-h; i < n; i++){
			b -= v[i];
			//dprd(v[i]);
		}
		ac = ((double)b)/((double)(n-h-l));
		printf("%.6lf\n", ac);
	}
}







