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
#define MAX 100005


int main(){
	int n, i, j, a[MAX], q, m;
	vi::iterator it;
	while(scd2(n, q) != EOF){
		if(n == 1){
			scd(a[0]);
			i = 1;
			for0(j, q){
				scd(m);
				if(j == 0)
					printf("%d", i);
				else
					printf(" %d", i);
			}
		} else if(n == 2){
			scd(a[0]);
			scd(a[1]);
			for0(j, q){
				scd(m);
				if(m <= a[1]) 	i = 1;
				else 			i = 2;
				if(j == 0)
					printf("%d", i);
				else
					printf(" %d", i);
			}
		} else {
			for(i=1; i <= n; i++){
				scd(a[i]);
			}
			for(i=3; i<=n; i++){
				a[i] += a[i-1];
			}
			vi v(a+1, a+n+1);
			for0(j, q){
				scd(m);
				if(m <= a[2]) i = 1;
				else {
					it = lower_bound(v.begin(), v.end(), m);
					if(it == v.end()){
						i = n;
					} else {
						i = distance(v.begin(), it);
						//dprd(i);
					}
				}
				if(j == 0)
					printf("%d", i);
				else
					printf(" %d", i);
			}
		}
		prnl();
	}
}






