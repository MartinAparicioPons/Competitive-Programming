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


int main() {        
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, t, b, T, B, rb, rt;
	while(cin >> n >> b >> t){
		T = B = rt = rb = 0;
		while(n){
			if(B == 0){
				B = min(n, b);
				rb += B;
				n -= B;
			} else {
				B--;
			}
			if(T == 0){
				T = min(n, t);
				rt += T;
				n -= T;
			} else {
				T--;
			}
		}
		cout << rb << " " << rt << "\n";
	}
}
