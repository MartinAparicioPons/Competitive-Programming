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

int n, a[100011];

bool simu(int k){
	int i, ac, j;
	for(i=0; i < n; i++){
		if(a[i] >  k) return false;
		if(a[i] == k) k--;
	}
	return true;
}

int main(){
	int t, T, i, j, h, l, r, ant;
	scd(T);
	for(t=1; t<=T; t++){
		scd(n);
		for0(i, n){
			scd(r);
			a[i] = r;
			if(i != 0) a[i] -= ant;
			ant = r;
		}
		for(l=1, h=10000000, i=0; i<40; i++){
			r = (h+l)/2;
			if(simu(r)){
				h = r;
			} else {
				l = r;
			}
		}
		printf("Case %d: %d\n", t, h);
	}
}










