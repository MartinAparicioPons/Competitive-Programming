#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll; typedef unsigned long long ull;
typedef int tint; typedef pair<tint, tint> ii;
int MAXN = 20;

ll M[21][21];

ll dp(int i, int j){
	if(M[i][j] != -1) return M[i][j];
	if(i == MAXN && j == MAXN) return 1ll;
	if(i >= MAXN && j <  MAXN) return 1ll;
	if(i <  MAXN && j >= MAXN) return 1ll;
	return M[i][j] = dp(i+1, j) + dp(i, j+1);
}

int main(){
	ios_base::sync_with_stdio(0);
	memset(M, ~0, sizeof M);
	cin >> MAXN;
	cout << dp(0, 0) << endl;
}
