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
	ll r[]= {1,2,4,6,12,24,36,48,60,120,180,240,360,720,840,
			 1260,1680,2520,5040,7560,10080,15120,20160,
			 25200,27720,45360,50400,55440,83160,110880,
			 166320,221760,277200,332640,498960,554400,
			 665280,720720,1081080,1441440,2162160,2882880,
			 3603600,4324320,6486480,7207200,8648640,
			 10810800,14414400,17297280,21621600,32432400,
			 36756720,43243200,61261200,73513440,110270160,
			 122522400,147026880,183783600,245044800,294053760,
			 367567200,551350800,698377680,735134400,1102701600,
			 1396755360,2095133040,2205403200,2327925600,
			 2793510720,3491888400,4655851200,5587021440,
			 6983776800,10475665200,13967553600,20951330400,
			 27935107200,41902660800,48886437600,64250746560,
			 73329656400,80313433200,97772875200,128501493120,
			 146659312800,160626866400,240940299600,293318625600,
			 321253732800,481880599200,642507465600,963761198400,
			 1124388064800,1606268664000,1686582097200,1927522396800,
			 2248776129600,3212537328000,3373164194400,4497552259200,
			 6746328388800,8995104518400,9316358251200,13492656777600,
			 18632716502400,26985313555200,27949074753600,32607253879200,
			 46581791256000,48910880818800,55898149507200,65214507758400,
			 93163582512000,97821761637600,130429015516800,195643523275200,
			 260858031033600,288807105787200,391287046550400,577614211574400,
			 782574093100800,866421317361600,1010824870255200,1444035528936000,
			 1516237305382800,1732842634723200,2021649740510400,2888071057872000,
			 3032474610765600,4043299481020800,6064949221531200,8086598962041600, -1};
	int a, i;
	ll n;
	scd(a);
	i = 0;
	while(r[i] != -1){
		i++;
	}
	while(a--){
		cin >> n;
		printf("%lld\n", *(upper_bound(r, r+i, n) - 1));
	}
}










