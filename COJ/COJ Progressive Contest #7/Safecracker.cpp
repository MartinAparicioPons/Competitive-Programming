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
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;
#define s1(x) (x*x)
#define s2(x) (x*x*x)
#define s3(x) (x*x*x*x)
#define s4(x) (x*x*x*x*x)

int main(){
	int x, a, b, c, d, e, i, n, w;
	char y[15], z[6];
	string r;
	bool ok;
	set<string> ss;
	while(scd(x), x != 0){
		ss.clear();
		scanf("%s", y);
		ok = false;
		n = strlen(y);
		//for0(i, n) y[i] = st[i]-'A'+1;
		sort(y, y+n);
		//dprd(n);
		for(a = 0 	; a < n - 4; a++){
			for(b = a + 1; b < n - 3; b++){
				for(c = b + 1; c < n - 2; c++){
					for(d = c + 1; d < n - 1; d++){
						for(e = d + 1; e < n	; e++){
							z[0] = (y[a]-'A')+1;
							z[1] = (y[b]-'A')+1;
							z[2] = (y[c]-'A')+1;
							z[3] = (y[d]-'A')+1;
							z[4] = (y[e]-'A')+1;
							i=0;
							do {
								w = z[0] - s1(z[1]) + s2(z[2]) - s3(z[3]) + s4(z[4]);
								if(w == x){
									r = "     ";
									r[0] = z[0]+'A'-1;
									r[1] = z[1]+'A'-1;
									r[2] = z[2]+'A'-1;
									r[3] = z[3]+'A'-1;
									r[4] = z[4]+'A'-1;
									ok = true;
									ss.insert(r);
									//cout << r << endl;
								}
							} while (next_permutation(z, z+5));
						}
					}
				}
			}
		}
		if(ok){
			cout << *ss.rbegin() << endl;
		} else {
			printf("no solution\n");
		}
	}
	scanf("%s", y);
	return 0;
}










