#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll; typedef unsigned long long ull;
typedef ull tint; typedef pair<tint, tint> ii;
const int MAXN = 101;

tint DP[MAXN][MAXN], r;

int main(){
	ios_base::sync_with_stdio(0);
	int i, j, n = 100, k = 1;
	
	for(i = 0; i < n; i++){
		for(j = 0; j <= i; j++){
			cin >> DP[i][j];
		}
	}
	
	for(i = 1; i < n; i++){
		DP[i][0] += DP[i-1][0];
		for(j = 1; j <= i; j++){
			DP[i][j] += max(DP[i-1][j], DP[i-1][j-1]);
		}
	}
	for(i = 0; i < n; i++){
		r = max(r, DP[n-1][i]);
	}
	DEB(r);
}
