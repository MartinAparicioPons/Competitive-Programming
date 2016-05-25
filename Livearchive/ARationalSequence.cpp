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

ll H;

ll rc(ll p, ll q, int h){
	H = max(H, 0ll + h);
	if(p == 1 && q == 1) return 0;
	if(p < q){
		return (1ll<<h) + rc(p, q-p, h+1);
	} else {
		return rc(p-q, q, h+1);
	}
}

int main() {
	ll tc, t, p, q, n, r;
	scanf("%lld", &tc);
	while(tc--){
		scanf("%lld %lld/%lld\n", &t, &p, &q);
		H = 0;
		r = rc(p, q, 0);
		
		cout << t << " " << (((1ll<<(H+1ll))-1ll)-r) << endl;
	}
}
