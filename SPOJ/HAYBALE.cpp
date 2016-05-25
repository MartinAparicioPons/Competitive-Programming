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
const static int MX = 210, MXX = 1000010;

int k, a, b, A[MXX] = {0}, n, i, R[MXX];

int main() {
	cin >> n >> k;
	for(i = 0; i < k; i++){
		cin >> a >> b;
		A[b+1]--; A[a]++;
	}
	R[0] = 0;
	for(i = 1; i <= n+1; i++){
		R[i] = R[i-1] + A[i];
	}
	sort(R, R+n+2);
	cout << R[(n+2)/2 + 1] << endl;
}
