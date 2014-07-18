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
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;


int main(){
	int d, k, i, ac,
		pr[9][9]={	{1,3,5,7,9,11,13,15,17},
					{4,12,11,10,9,8,7,6,14},
					{-1,3,5,7,9,11,13,15,17},
					{7,12,8,13,9,5,10,6,11},
					{7,3,8,13,9,5,10,15,11},
					{-1,3,5,7,9,11,13,15,17},
					{13,12,2,10,9,8,7,15,5},
					{10,12,14,16,-9,11,13,6,8},
					{-1,3,5,7,9,11,13,15,17}};
	while(scd2(d, k), d || k){
		if(d%3 == 0){
			prd(k*9);
		} else {
			d--;
			for(ac = 0, i = 0; i < k;i++){
				ac+=pr[d][i%9];
			}
			prd(ac);
		}
	}
}










