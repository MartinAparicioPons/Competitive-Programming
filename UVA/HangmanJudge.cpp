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
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;


int main(){
	int i, j, n, aa, bb, g, h;
	string a, b;
	while(scd(n), n!=-1){
		cin >> a;
		cin >> b;
		aa = a.size();
		bb = b.size();
		for(i = 0, h = 0, g = 0; (i < bb) && (h < 7) && (a != ""); i++){
			if(a.find(b[i]) != string::npos){
				a.erase(remove(a.begin(), a.end(), b[i]), a.end());
			} else 
				h++;
		}
		if(h == 7)
			printf("Round %d\nYou lose.\n", n);
		else if(a == "")
			printf("Round %d\nYou win.\n", n);
		else
			printf("Round %d\nYou chickened out.\n", n);
		
	}
}






