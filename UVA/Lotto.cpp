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

int main(){
	int k, a, b, c, d, e, f, i, v[13];
	bool fi=true;
	while(scd(k), k!=0){
		if(fi)fi=false;
		else prnl();
		for0(i, k){
			scd(v[i]);
		}
		for(a=0  ; a<k-5; a++){
			for(b=a+1; b<k-4; b++){
				for(c=b+1; c<k-3; c++){
					for(d=c+1; d<k-2; d++){
						for(e=d+1; e<k-1; e++){
							for(f=e+1; f<k  ; f++){
								printf("%d %d %d %d %d %d\n", v[a], v[b], v[c], v[d], v[e], v[f]);
							}
						}
					}
				}
			}
		}
	}
}










