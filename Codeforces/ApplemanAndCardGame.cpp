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

int gt(ll m[26]){
	int ma=-1, mi;
	for(int i = 0; i < 26; i++){
		if(m[i] > ma){
			ma = m[i];
			mi = i;
		}
	}
	return mi;
}

int main(){
	ll m[26]={0}, ih[26]={0};
	int aux, n, k, i, j;
	ll res=0;
	char a;
	cin >> n >> k;
	for0(i, n){
		cin >> a;
		m[a-'A']++;
	}
	while(k > 0){
		aux = gt(m);
		if(m[aux] <= k){
			ih[aux] = m[aux];
			k -= m[aux];
			m[aux] = 0;
		} else {
			ih[aux] = k;
			k = 0;
		}
	}
	for0(i, 26){
		res += ih[i]*ih[i];
	}
	cout << res << endl;
}












