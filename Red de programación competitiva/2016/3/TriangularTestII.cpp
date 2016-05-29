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

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) |= (1<<(x)))
#define CB(m, x) ((m) &= ~(1<<(x)))
#define TB(m, x) ((m) ^= (1<<(x)))

using namespace std; typedef string string;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static ll MX = 10000010;

ll T[MX], DP[MX], tn;

ll change(ll n){
    if(n <= 0ll) return 0ll;
    if(DP[n] == -1ll){
        ll r = LLONG_MAX;
        for(int i = 0; T[i] <= n; i++){
            r = min(r, change(n - T[i]) + 1);
            if(r == 3ll) break;
        }
        DP[n] = r;
    }
    return DP[n];
}

int main() {
    ll n;
    int i, j, k;
    memset(DP, -1, sizeof DP);
    for(i = 1, T[0] = 1; i < MX && T[i-1] + i + 1ll < MX; i++) T[i] = T[i-1] + i + 1ll;
    tn = i;
    for(i = 0; i < tn; i++){
		DP[T[i]] = 1;
		for(j = 0; j < tn; j++){
			if(T[i] + T[j] < MX && DP[T[i] + T[j]] == -1) DP[T[i] + T[j]] = 2;
		}
	}
	
    while (cin >> n){
        cout << change(n) << "\n";
    }
}
