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

int res(int a, int b){
	int r;
	if(a > b) swap(a, b);
	if(a == 1) r = b;
	else if(a == 2){
		r = b/4*4+((b%4==1)?2:((b%4>=2)?4:0));
	} else {
		r = (a*b+1)/2;
	}
	return r;
}


int main(){
	int a, b, r;
	while(scd2(a, b), a||b){
		r = res(a, b);
		
		printf("%d knights may be placed on a %d row %d column board.\n", r, a, b);
	}
}








