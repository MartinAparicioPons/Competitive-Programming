#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl
#define F first
#define S second

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi; typedef vector<ii> vii;
const static int MAXN = 10000010;

int n, m, DP[MAXN], V[MAXN], I;

int dp(int n){
	if(n <= 0) return MAXN;
	if(DP[n] == -1 && !V[n]) {
		V[n] = true;
		if(n >= m) DP[n] = n - m;
		else DP[n] = 1 + min(dp(n-1), dp(n*2));
	} if(DP[n] != -1) return DP[n];
	return MAXN;
}

int main(){        
	ios_base::sync_with_stdio(0); cin.tie(0);
	memset(DP, ~0, sizeof DP);
	cin >> n >> m;
	cout << dp(n) << endl;
}
