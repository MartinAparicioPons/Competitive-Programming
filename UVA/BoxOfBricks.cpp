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
#define SORT(v) sort(v.begin(), v.end())
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef pair<int, ii> iii;
typedef pair<int, string> is;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;


int main(){
	int n, h, i, k, t=1, m;
	vi v;
	while(scd(n), n!=0){
		m = 0;
		v.clear();
		for0(i, n){
			scd(h);
			m += h;
			v.push_back(h);
		}
		m /= n;
		SORT(v);
		for(i = 0, k = 0; i < n; i++){
			if(v[i] < m){
				k += m - v[i];
			} else if(v[i] > m) {
				k += v[i] - m;
			}
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n", t++, k/2);
	}
}







