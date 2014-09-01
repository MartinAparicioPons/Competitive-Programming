
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
#define for0(i,n) for(i = 0; i < n; i++)
#define for1(i,n) for(i = 1; i <= n; i++)
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define SQ(x) ((x)*(x))
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;


int main(){
	int n, i, a, t2[4] = {6,2,4,8}, t3[4]={1,3,9,7}, t4[4]={6,4,6,4};
	string s;
	getline(cin, s);
	n = s.size();
	i = (s[n-1] - '0');
	if(n >= 2) i += (s[n-2] - '0')*10;
	a = 1 + t2[i%4] + t3[i%4] + t4[i%4];
	//printf("%d %d %d %d\n", 1, t2[i%4], t3[i%4], t4[i%4]);
	printf("%d\n", (i==0)?4:a%5);
	
}







