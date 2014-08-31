#include <bits/stdc++.h>
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
	int t, r, n, i, j, a[101];
	scd(t);
	while(t--){
		scd(n);
		for0(i, n){
			scd(a[i]);
		}
		r = 0;
		for(i = 0; i < n; i++){
			for(j = i+1; j < n; j++){
				if(a[i] > a[j]){
					swap(a[i], a[j]);
					r++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", r);
	}
}







