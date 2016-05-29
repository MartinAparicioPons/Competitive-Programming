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
const static int MX = 100010;


int main() {
	int RSQ[11][MX], n, q, l, r, i, j;
	while(cin >> n){
		memset(RSQ, 0, sizeof RSQ);
		for(i = 0; i < n; i++) {
			cin >> l;
			for(j = 0; j < 10; j++) RSQ[j][i+1] = RSQ[j][i] + (j == l);
		}
		cin >> q;
		while(q--){
			cin >> l >> r;
			l--;
			int a = 0;
			for(i = 0; i < 10; i++){
				a += RSQ[i][l] != RSQ[i][r];
			}
			cout << a << "\n";
		}
	}
}
