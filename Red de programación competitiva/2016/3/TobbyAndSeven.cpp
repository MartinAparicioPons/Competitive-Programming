#include <bits/stdc++.h>
#define EPS 1e-11
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1ll<<(x)))
#define SB(m, x) ((m) | (1ll<<(x)))
#define CB(m, x) ((m) & ~(1ll<<(x)))
#define TB(m, x) ((m) ^ (1ll<<(x)))

using namespace std; typedef string string;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static ll MX = 410;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n;
    int i, j, K[22], k;
    while (cin >> n){
		cin >> k;
		int cnt = 0;
		for(i = 0; i < k; i++) {
			cin >> K[i];
			if(GB(n, K[i])) cnt++;
		}
		ll a, mx = -1;
		for(ll m = (1ll<<k) - 1; m >= 0; m--) {
			if(__builtin_popcount(m) == cnt){
				a = n;
				for(i = 0; i < k; i++) {
					if(GB(m, i)) a = SB(a, K[i]);
					else a = CB(a, K[i]);
				}
				if(a % 7ll == 0ll) {
					mx = a;
					break;
				}
			}
		}
		cout << mx << "\n";
    }
}
