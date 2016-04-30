#include <bits/stdc++.h>
#define EPS 1e-11
#define LB 1e11
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

using namespace std;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 1000010;

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	//cout<<fixed<<setprecision(9);
	ll tc = 1, t, n, i;
	cin >> t;
	while(t--){
		cin >> n;
		ll o = n;
		set<int> D;
		int it = 0, d;
		while(D.size() < 10 && it < 1000){
			ll m = n;
			it++;
			while(m){
				it++;
				d = m % 10;
				D.insert(d);
				m /= 10;
			}
			n += o;
		}
		if(it >= 1000){
			printf("Case #%lld: INSOMNIA\n", tc++);
		} else {
			printf("Case #%lld: %lld\n", tc++, n - o);
		}
	}
}
