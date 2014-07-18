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


int main(){
	string a, b, c, d;
	int aa, bb, i, f, j;
	cin >> a >> b;
	c = a;
	d = b;
	sort(c.begin(), c.end());
	sort(d.begin(), d.end());
	if(c == d){
		printf("array");
		return 0;
	}
	aa = a.size();
	bb = b.size();
	if(aa <= bb){
		printf("need tree");
		return 0;
	}
	for(i = 0, j = 0; i < aa;){
		if(j == bb){
			printf("automaton");
			return 0;
		}
		if(a[i] != b[j]){
			i++;
		} else {
			j++;
		}
	}
	for(i = 0; i < bb; i++){
		f = a.find(b[i]);
		if(f == string::npos){
			printf("need tree");
			return 0;
		} else {
			a.erase(f, 1);
		}
	}
	printf("both");
}










