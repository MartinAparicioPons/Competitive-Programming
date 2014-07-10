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


int main(){
	int a, d, n, i, j;
	vi v1, v2;
	while(scd2(a, d), a || d){
		v1.clear(); v2.clear();
		for0(i, a){
			scd(n);
			v1.push_back(n);
		}
		for0(i, d){
			scd(n);
			v2.push_back(n);
		}
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());
		if(v1[0] < v2[1]){
			printf("Y\n");
		} else {
			printf("N\n");
		}
	}
}







