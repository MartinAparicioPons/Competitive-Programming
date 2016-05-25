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
const static int MX = 500100;


int main() {
	int i, j, n, A[MX];
	cin >> n;
	for(i = 0; i < n; i++) cin >> A[i];
	vi R; int r = 0;
	for(i = 0; i < n; i++){
		if(i && __gcd(A[i], A[i-1]) != 1) R.PB(1), r++;
		R.PB(A[i]);
	}
	cout << r << endl;
	for(int a : R) cout << a << " ";
	cout << endl;
}
