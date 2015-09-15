#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define MP make_pair

using namespace std;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 1100;
const static ll D13 = 10000000000000ll;

int n, m, A[MAXN*MAXN], DP[MAXN][MAXN];

bool dp(int i, int r, bool t){
	if(t && r == 0) return true;
	if(i >= n) return false;
	if(DP[i][r] == -1){
		DP[i][r] = dp(i+1, r, t) || dp(i+1, (r+A[i])%m, true);
	}
	return DP[i][r];
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j;
	memset(DP, -1, sizeof DP);
	scanf("%d %d", &n, &j); m = j;
	for(i = 0; i < n; i++) scanf("%d", A + i);
	if(n > m)
		printf("YES\n"); 
	else if(dp(0, 0, false))
		printf("YES\n"); 
	else 
		printf("NO\n");
}
