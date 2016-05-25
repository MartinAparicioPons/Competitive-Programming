#include <bits/stdc++.h>
#define EPS 1e-11
#define LB 1e11
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) |= (1<<(x)))
#define CB(m, x) ((m) &= ~(1<<(x)))
#define TB(m, x) ((m) ^= (1<<(x)))

using namespace std; typedef string string;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MX = 101001;

ll n, k, m, DP[33];

bool C[33];

ll f(int x){
	if(x == 0) return 1;
	if(x < 0)  return 0;
	if(DP[x] == -1){
		ll r = 0;
		for(int i = 1; i <= 30; i++){
			if(C[i]){
				r += f(x - i);
			}
		}
		DP[x] = r;
	}
	return DP[x];
}

int main() {
	ll t, tc, i;
	cin >> tc;
	while(tc--){
		cin >> t >> n >> m >> k;
		memset(C, true, sizeof C);	
		memset(DP, -1, sizeof DP);	
		for(i = 0; i < 36; i++){
			ll r = i*k + m;
			if(r < 31) C[r] = false;
		}
		cout << t << " " << f(n) << endl;
	}
	
	
}
