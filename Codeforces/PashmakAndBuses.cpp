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

bool entra(ll n, ll k, ll d){
	ll i=k;
	if(k < 2 && n > k) return true;
	if(n < k || n < d) return false;
	while(true){
		if(n <= k) return false;
		if(d == 1) return true;
		k*=i;
		d--;
	}
}

int main(){
	ll n, k, d, i, j, q, l, p;
	cin >> n >> k >> d;
	if(entra(n, k, d)){
		printf("-1\n");
		return 0;
	}
	q = 1;
	for0(i, d){
		for(p = 0, j = 0; j < n; p=(p+1)%k){
			for(l = 0; l < q && j < n; l++, j++){
				cout << p+1 << " ";
			}
		}
		if(q < 10000) q*=k;
		prnl();
	}
}







