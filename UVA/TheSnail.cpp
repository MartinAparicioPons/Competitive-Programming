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
#include <cstdlib>
#include <locale>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
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
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;

int main(){
	int h, u, d, f, i;
	double a, p, up;
	while(scanf("%d %d %d %d", &h, &u, &d, &f), h!=0){
		i = 0;
		p = (u*f*1.0)/(100.0);
		up = u;
		a = 0;
		do{
			//printf("|| %d: %.4F %.4F\n", h, a, up);
			i++;
			a += up;
			up -= p;
			if(up < 0.0) up = 0.0;
			if(a > ((double)h)) break;
			a -= d;
		} while (((a >= 0.0) && (a <= ((double)h))));
		if(a > ((double)h)){
			printf("success on day %d\n", i);
		} else {
			printf("failure on day %d\n", i);
		}
	}
}








