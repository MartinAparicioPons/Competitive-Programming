#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
	#define endl "\n"
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
#define SB(m, x) ((m) | (1<<(x))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))

using namespace std;		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 500010;

ll n, a, b, t, D[MX], C[MX];
string S;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j;
	while(cin >> n >> a >> b >> t) {
		cin >> S;
		n = S.size();
		D[0] = 1 + a + (S[n-1]=='w') * b;
		for(i = 1; i < n; i++) D[i] = D[i-1] + 1 + a + (S[n-i-1]=='w') * b;
		C[0] = 1 + (S[0]=='w') * b;
		for(i = 1; i < n; i++) C[i] = C[i-1] + 1 + a + (S[i]=='w') * b;
		//~ for(i = 0; i < n; i++) cerr << C[i] << " "; EL;
		//~ for(i = 0; i < n; i++) cerr << D[i] << " "; EL;
		ll mx = 0;
		for(i = 0; i < n && C[i] <= t; i++) {
			ll r = i+1;
			//~ DB(i ); DB(C[i] + a*(i)); DB(t - C[i] + a*i); DBL((upper_bound(D, D+n-i, t - C[i] - a*(i)) - D));
			if(C[i] + a*(i) < t) r += (upper_bound(D, D+n-i-1, t - C[i] - a*(i)) - D);
			mx = max(mx, r);
		}
		//~ EL;
		t -= C[0];
		for(i = 0; i < n && D[i] <= t; i++) {
			ll r = i+1;
			//~ DB(i); DB(D[i] + a*(i+1)); DB(t - D[i] - a*(i+1)); DBL((upper_bound(C, C+n-i-1, C[0] + t - D[i] - a*(i+1)) - C));
			if(D[i] + a*(i+1) < t) r += (upper_bound(C, C+n-i-1, C[0] + t - D[i] - a*(i+1)) - C);
			mx = max(mx, r);
		}
		cout << mx << endl;
	}
}
