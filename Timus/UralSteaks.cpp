#include <bits/stdc++.h>
using namespace std;
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define prd(x) printf("%d\n", x)

int main(){
	int n, k;
	cin >> n >> k; n*=2;
	if(n/2 <= k) 	  cout << "2" << endl;
	else if(n%k >= 1) cout << (n/k) + 1 << endl;
	else 			  cout << n/k << endl;
	
}
