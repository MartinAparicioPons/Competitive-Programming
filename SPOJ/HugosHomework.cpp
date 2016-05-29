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

ll get_m(ll n){
	ll A[20], i = 0;
	while(n){
		A[i++] = n%10;
		n /= 10;
	}
	sort(A, A+i, greater<int>());
	ll m = 0, p = 1;
	for(int j = 0; j < i; j++){
		m += A[j]*p;
		p *= 10;
	}
	return m;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n, c;
	while(cin >> n){
		c = 0;
		while(n){
			c++;
			n -= get_m(n);
		}
		cout << c << endl;
	}
}

