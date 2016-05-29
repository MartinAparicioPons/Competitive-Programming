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
const static ll MX = 1000100;

ll A[MX], n, k;

bool check(ll m){
	ll c = 0;
	for(int i = 0; i < n;){
		ll a = 0;
		while(a < m && i < n) {
			a += A[i];
			i++;
		}
		if(a >= m) c++;
	}
	return c >= k;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll l, r, m, i;
	for(i = 0; i < MX; i++) A[i] = 2*i + 1;
	
	while(cin >> n >> k){
		l = 0; r = A[n]*A[n];
		while(l < r){
			m = (l+r+1) / 2;
			if(check(m)) l = m;
			else r = m-1;
		}
		cout << l << endl;
	}
}

