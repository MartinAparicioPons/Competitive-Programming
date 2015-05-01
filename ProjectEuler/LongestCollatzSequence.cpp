#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll; typedef unsigned long long ull;
typedef int tint; typedef pair<tint, tint> ii;
const int MAXN = 1000001, MAXM = 50*MAXN;

int DP[MAXM];

ull collatz(ull n){
	int m = (int)n;
	if(n == m && m < MAXM && DP[m] != -1) return DP[n];
	if(n%2ll == 0ll){
		if(n == m && m < MAXM) return DP[m] = 1ll + collatz(n/2ll);
		return 1ll + collatz(n/2ll);
	}
	if(n == m && m < MAXM) return DP[m] = 1ll + collatz(3ll*n + 1ll);
	return 1ll + collatz(3ll*n + 1ll);
}

int main(){
	ios_base::sync_with_stdio(0);
	ull i, n, r = 0ll, a;
	memset(DP, ~0, sizeof DP);
	DP[1] = 0;
	for(i = 2; i < MAXN; i++){
		a = collatz(i);
		if(a > r){
			r = a;
			n = i;
		}
	}
	cout << n << " with: " << r << endl;
}
