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
#define MAX_N 100005

int lis(vi &a, vi &b){
	int L[MAX_N], L_id[MAX_N], lis = 0, lis_end = 0, n = a.size();
	for (int i = 0; i < n; ++i) {
		int pos = lower_bound(L, L + lis, a[i]) - L;
		L[pos] = a[i];
		L_id[pos] = i;
		b[i] = pos ? L_id[pos - 1] : -1;
		if (pos + 1 > lis) {
			lis = pos + 1;
			lis_end = i;
		}
	}
	return lis;
}

int main(){
	int n, x, i, j;
	vi a, b, c, d;
	while(scd(n) != EOF){
		a.clear();
		b.clear();
		c.clear();
		d.clear();
		b.resize(n);
		d.resize(n);
		for0(i, n){
			scd(x);
			a.push_back(x);
			c.push_back(-x);
		}
		if(lis(a, b) == lis(c, d)){
			printf("Caution. I will not intervene.\n");
		} else {
			printf("Don't worry. I must intervene.\n");
		}
	}
}










