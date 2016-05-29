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


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, s, j, d, i;
	string S;
	while(cin >> n >> s >> j >> d >> S){
		int a, b, ta, tb;
		a = b = ta = tb = 0;
		for(i = 0; i < n; i++){
			if(S[i] == 'A'){
				a++;
			} else {
				b++;
			}
			if(a >= b + d && a >= j){
				ta++;
				a = b = 0;
			}
			if(b >= a + d && b >= j){
				tb++;
				a = b = 0;
			}
		}
		cout << ta << " " << tb << endl;
	}
}

