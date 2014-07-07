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

int b, s, i, j, l, r, L[100005], R[100005];

int main(){
	while(scanf("%d %d", &s, &b), s || b){
		for(i=1; i<=s; i++){
			L[i] = i-1;
			R[i] = i+1;
		}
		L[1] = -1;
		R[s] = -1;
		for(j=0; j < b; j++){
			scanf("%d %d", &l, &r);
			L[R[r]] = L[l];
			if(L[l] == -1){
				printf("* ");
			} else {
				printf("%d ", L[l]);
			}
			R[L[l]] = R[r];
			if(R[r] == -1){
				printf("*\n");
			} else {
				printf("%d\n", R[r]);
			}
		}
		printf("-\n");
	}
}








