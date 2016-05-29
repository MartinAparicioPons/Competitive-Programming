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
const static ll MX = 10010;


int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	
	int t, n, i, j, k, a, b, m, l, r, A[MX];
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(i = 0; i < n; i++) cin >> A[i];
		l = 0; r = 0; a = 0; m = -1; b = 0;
		while(l < n && r < n){
			if(A[r] == 1) {
				r++;
				b++;
			} else if(a + 1 <= k){
				a++;
				r++;
			} else if(A[l] == 1) {
				l++;
				b--;
			} else {
				a--; 
				l++;
			}
			m = max(m, a+b);
		}
		cout << m << endl;
	}
}
