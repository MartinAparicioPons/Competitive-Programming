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


int main() {
	int t, tc, n, a, b, c, aa, bb, cc;
	cin >> tc;
	while(tc--){
		cin >> t >> n;
		a = b = c = aa = bb = cc = 0;
		for(int i = 1; i < n*5; i++){
			if(aa < n && i % 2) {a += i; aa++;}
			if(bb < n && i % 2 == 0) {b += i; bb++;}
			if(cc < n) {c += i; cc++;}
		}
		printf("%d %d %d %d\n", t, c, a, b);
	}
}
