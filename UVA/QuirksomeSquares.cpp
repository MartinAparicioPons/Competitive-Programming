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
	int r[4][9]={{0,1,81,-1,-1,-1,-1,-1,-1},
				 {0,1,2025,3025,9801,-1,-1,-1,-1},
				 {0,1,88209,494209,998001,-1,-1,-1,-1},
				 {0,1,4941729,7441984,24502500,25502500,52881984,60481729,99980001}},
		n, i, j, a, b, p10[10]={1,10,100,1000,10000,100000,1000000,1000000,100000000,1000000000};
	while(scd(n) != EOF){
		if(n==2){
			printf("00\n01\n81\n");
		} else if(n==4){
			for0(i, 5){
				printf("%04d\n", r[1][i]);
			}
		} else if(n==6){
			for0(i, 5){
				printf("%06d\n", r[2][i]);
			}
		} else {
			for0(i, 9){
				printf("%08d\n", r[3][i]);
			}
		}
	}
}









