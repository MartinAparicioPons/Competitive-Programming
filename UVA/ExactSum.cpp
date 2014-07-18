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

int main(){
	int n, k, m, i, a;
	vector<int> s;
	set< pair<int, int> > ss;
	set< pair<int, int> >::iterator it, it2;
	while(scd(n) != EOF){
		s.clear();
		ss.clear();
		for0(i, n){
			scd(a);
			s.push_back(a);
		}
		scd(m);
		sort(s.begin(), s.end());
		for(a=s.size(), i=0; i<a; i++){
				//dprd(22);
			if(find(s.begin(), s.end(), m-s[i]) != s.end()){
				//dprd(23);
				ss.insert(_MP(s[i], *find(s.begin(), s.end(), m-s[i])));
			}
		}
		//dprd(24);
		for(m=999999999, it=ss.begin(); it != ss.end(); it++){
			if(m > abs(it->second - it->first)){
				it2 = it;
				m = abs(it->second - it->first);
			}
		}
		printf("Peter should buy books whose prices are %d and %d.\n\n", it2->first, it2->second);
		
	}
}










