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
#include <cstdlib>
#include <locale>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
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
	int l, i, a, j, k=1, b, v[105][105],
		d1[8]={0, 1, 1, 0, -1, -1, -1, 1},
		d2[8]={1, 0, 1, -1, 0, -1, 1, -1};
	string aux;
	while(scd2(a, b), a||b){
		memset(v, 0, sizeof v);
		if(k > 1) printf("\n");
		for(i = 1; i <= a; i++){
			cin >> aux;
			for(j = 0; j < b; j++){
				if(aux[j] == '*'){
					v[i][j+1] = -10;
				} else {
					v[i][j+1] = 0;
				}
			}
		}
		
		for(i = 1; i <= a; i++){
			for(j = 1; j <= b; j++){
				if(v[i][j] < 0){
					for(l=0; l<8; l++){
						v[i+d1[l]][j+d2[l]]+=1;
					}
				}
			}
		}
		printf("Field #%d:\n", k++);
		for(i = 1; i <= a; i++){
			for(j = 1; j <= b; j++){
				if(v[i][j] >= 0)
					printf("%d", v[i][j]);
				else
					printf("*");
			}
			printf("\n");
		}
	}
	
	
}








