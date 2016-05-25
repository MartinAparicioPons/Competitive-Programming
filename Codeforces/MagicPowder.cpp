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
const static int MX = 101000;

ll n, k, A[MX], B[MX];

bool check(ll m){
	ll u = 0;
	for(int i = 0; i < n; i++){
		if(u > k) return false; // 'couse overflow, that's why.
		if(m*A[i] > B[i]){
			u += m * A[i] - B[i];
		}
	}
	return u <= k;
}

int main() {
	int i;
	cin >> n >> k;
	for(i = 0; i < n; i++) cin >> A[i];
	for(i = 0; i < n; i++) cin >> B[i];
	ll l, r, m;
	l = 0; r = 2000000001ll;
	while(l+1ll < r){
		m = (l+r)/2ll; 
		if(check(m)) l = m;
		else r = m;
	}
	if(check(l+1)) cout << l+1;
	else cout << l;
	cout << endl;
	
	
}
