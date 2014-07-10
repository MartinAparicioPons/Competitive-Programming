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

int o[10005];
int findOwn(int i){
	return (o[i] == i)? i : (o[i] = findOwn(o[i]));
}

int main(){
	int t, n, i, q, z, x, y, s[10005];
	scd(t);
	while(t--){
		scd(n);
		o[0]=0;
		for(i=1; i <= n; i++){
			scanf("%d", s+i);
			o[i] = i;
		}
		scanf("%d", &q);
		for0(i, q){
			scanf("%d", &z);
			if(z == 0){
				scanf("%d %d", &x, &y);
				x = findOwn(x);
				y = findOwn(y);
				if(x == y){
					printf("Invalid query!\n");
				} else {
					if(s[x] > s[y]){
						o[y] = x;
					} else if(s[x] < s[y]){
						o[x] = y;
					}
				}
			} else {
				scanf("%d", &x);
				x = findOwn(x);
				prd(x);
			}
		}
	}
}
 
 
 
 
