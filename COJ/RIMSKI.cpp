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
	string b, a;
	//while(1){
	int n, i=0, j, c=0, l=0, x=0, v=0, aa, bb;
	
	cin >> b;
	n = b.size();
	for0(j, n){
		if(b[j] == 'C') c++;
		if(b[j] == 'L') l++;
		if(b[j] == 'X') x++;
		if(b[j] == 'V') v++;
		if(b[j] == 'I') i++;
	}
	if((c == 1) && (x == 1)){
		aa = b.find("C");
		bb = b.find("X");
		if(aa < bb){
			swap(b[aa], b[bb]);
		}
	} else if((c == 0) && (l == 1) && (x == 1)){
		aa = b.find("L");
		bb = b.find("X");
		if(aa < bb){
			swap(b[aa], b[bb]);
		}
	//	cout << "° " << b << endl;
	} 
	if((x > 0) && (i == 1) && (v == 0)){
		for(aa=-1, j=0; j < x; j++){
			aa = b.find("X", aa+1);
		}
		bb = b.find("I");
		if(aa < bb){
			swap(b[aa], b[bb]);
		}
	//	cout << "°°" << b << endl;
	} 
	
	if((i == 1) && (v == 1)){
		aa = b.find("V");
		bb = b.find("I");
		if(aa < bb){
			swap(b[aa], b[bb]);
		}
	}
	if((x == 1) && (l == 1) && (i == 1) && (v == 0)){
		b = "XLI";
	} else if((x == 2) && (l == 1) && (i == 1) && (v == 0)){
		b = "XLIX";
	} 
	
	cout << b << endl;
	
	//}
}







