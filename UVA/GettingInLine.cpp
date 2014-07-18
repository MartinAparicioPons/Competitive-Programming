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

double dist(ii a, ii b){
	return sqrt((double)(((b._F-a._F)*(b._F-a._F)) + ((b._S-a._S)*(b._S-a._S))));
}

int main(){
	int T = 1, n, i, j, pe[8]={0,1,2,3,4,5,6,7}, an[8];
	ii a[8];
	double m[8][8], mn, ac;
	while(scd(n), n!=0){
		for0(i, n){
			scd2(a[i]._F, a[i]._S);
		}
		for0(i, n){
			for0(j, n){
				m[i][j] = dist(a[i], a[j]) + 16.0;
				//printf("%.3lf\t", m[i][j]);
			}
			//prnl();
		}
		sort(pe, pe+n);
		mn = 999999999999.0;
		do {
			ac = 0.0;
			for(i = 1; i < n; i++){
				ac += m[pe[i]][pe[i-1]];
			}
			if(ac < mn){
				mn = ac;
				for0(i, n) an[i] = pe[i];
			}
		} while(next_permutation(pe, pe+n));
		printf("**********************************************************\nNetwork #%d\n", T++);
		for(i=1; i < n; i++){
			printf("Cable requirement to connect (%d,%d) to (%d,%d) is %.2lf feet.\n", a[an[i-1]]._F, a[an[i-1]]._S, a[an[i]]._F, a[an[i]]._S, m[an[i]][an[i-1]]);
		}
		
		printf("Number of feet of cable required is %.2lf.\n", mn);
	}
}










