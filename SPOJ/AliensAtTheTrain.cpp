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
const static ll MX = 100010, INF = INT_MAX;

int n, m;
ll A[MX], RSQ[MX];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t, i, j;
	cin >> t;
	while(t--){
		memset(RSQ, 0, sizeof RSQ);
		cin >> n >> m;
		for(i = 0; i < n; i++) cin >> A[i];
		ll r = -1, p = INF;
		RSQ[0] = 0;
		for(i = 1; i <= n; i++) RSQ[i] = RSQ[i-1] + A[i-1];
		for(i = 0; i < n; i++){
			ll rr = (upper_bound(RSQ, RSQ+n+1, m + RSQ[i]) - RSQ)-1ll-i; 
			if(r < rr || r == rr && p > RSQ[rr+i] - RSQ[i]){
				r = rr;
				p = RSQ[r+i] - RSQ[i];
			}
		}
		
		cout << p << " " << r << endl;
	}
}

