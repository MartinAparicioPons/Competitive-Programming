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
typedef pair<int, string> is;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;


int main(){
	map<int, is> m;
	set<int> w;
	set<int>::iterator it;
	map<int, string> st;
	map<int, string>::iterator it2;
	int n, i, t=0;
	string s;
	scd(n);
	while(n--){
		cin >> s >> i;
		m.insert(_MP(i, _MP(t++, s)));
		w.insert(i);
	}
	for(it = w.begin(); it!=w.end(); it++){
		if(w.find(-(*it)) == w.end()){
			st.insert(m[*it]);
		}
	}
	printf("FOREVER ALONE ones:\n");
	for(it2 = st.begin(); it2!=st.end(); it2++){
		cout << it2->second << "\n";
	}
}







