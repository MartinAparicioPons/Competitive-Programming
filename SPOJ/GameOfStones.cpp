#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
#else
	#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
	#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
	#define EL cerr << endl;
#endif
#define EPS 1e-11
#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) | (1<<(x)))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))

using namespace std; 		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 1010, MOD = 1000000007ll;

ll DP[MX][MX];

ll dp(int n, int k){
	if(n <= 1) return 1ll;
	if(k == 0) return 0ll;
	if(DP[n][k] == -1){
		ll ans = 0ll;
		if(n >= k) ans = dp(n-k, k);
		ans = (ans + dp(n, k-1)) % MOD;
		DP[n][k] = ans;
	}
	return DP[n][k];
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	memset(DP, -1, sizeof DP);
	ll n, i, j, r;
	cin >> n;
	while(cin >> n){
		r = 0;
		if(n%2) i = 0;
		else 	i = 1;
		for(; i < n; i+=2){
			r = (r + dp(n-i, i)) % MOD;
		}
		cout << r << endl;
	}
}


