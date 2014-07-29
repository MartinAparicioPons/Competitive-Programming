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
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector< vector<int> > vvi;


int main(){
	int n, m, i, a, b, t[1010];
	set<int> s[1010];
	vector<int> r;
	memset(t, 0, sizeof t);
	scanf("%d %d", &n, &m);
	for(i = 0; i < m; i++){
		scanf("%d %d", &a, &b);
		if(s[a].insert(b).second) t[a]++;
	}
	for(b = 0, i = 1; i <= n; i++){
		if(b < t[i]) b = t[i];
	}
	for(i = 0; i < n; i++){
		if(t[i] == b) r.push_back(i);
	}
	printf("%d", r[0]);
	for(i = 1, b = r.size(); i < b; i++){
		printf(" %d", r[i]);
	}
	printf("\n");
}







