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

const int MAX = 200005;

int main(){
	ll a[MAX], n, i, j, b=0, c=0;
	cin >> n;
	for0(i, n){
		cin >> a[i];
	}
	sort(a ,a+n);
	i = 1;
	while(a[i] == a[i-1] && i < n) i++;
	b = i;
	i = n-2;
	while(a[i+1] == a[i] && i >= 0) i--;
	c = n-i-1;
	if(n == 2){
		cout << a[1] - a[0] << " "<< 1;
		return 0;
	}
	if(a[n-1] == a[0]){
		b = 0;
		for0(i, n){
			b += i;
		}
		cout << "0 " << b;
		return 0;
		
	}
	cout << a[n-1] - a[0] << " " << b*c;
}



