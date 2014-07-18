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
	int n, a, b, i, j, v[15], c, d[7]={1, 10, 100, 1000, 10000, 100000, 1000000};
	while(scd(n), n!=0){
		c=0; j=0;
		for0(i, n){
			scd(a);
			if(a == 0){
				c++;
			} else {
				v[j++] = a;
			}
		}
		//for0(i, 15) dprd(v[i]);
		sort(v, v+j);
		a = v[0]; i = 1;
		b = v[1]; j = 1;
		n = n - 2 - c;
		while(c > 0){
			if(c%2 == 1){
				a*=10; i++;
			} else {
				b*=10; j++;
			}
			c--;
		}
		//for0(i, 15) dprd(v[i]);
		for(c = 2; n > 0; c++){
			//dprd2(a, b);
			if(i <= j){
				a = a*10 + v[c]; i++;
			} else {
				b = b*10 + v[c]; j++;
			}
			n--;
		}
		//dprd2(a, b);
		prd((a + b));
	}
}






