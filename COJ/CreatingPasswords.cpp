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

int main(){
	int t, i, j, a;
	string s, z, n;
	vector<string> vv;
	scd(t);
	while(t--){
		vv.clear();
		cin >> n;
		getline(cin, s);
		//cout << s << endl;
		z = "";
		for(i=1; i < s.size(); i++){
			if(s[i] != ' '){
				z += s[i];
			} else {
				z += '*';
				vv.push_back(z);
				z = "";
			}
		}
		z += '*';
		vv.push_back(z);
		vector<string> v(vv.rbegin(), vv.rend());
		z = "";
		z += n[0];
		z += n[1];
		for(i=0; i < v.size(); i++){
			z += v[i];
		}
		z[z.size()-1] = n[2];
		z += n[3];
		cout << z << endl;
	}
}










