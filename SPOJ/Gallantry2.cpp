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
const static ll MX = 1010;

int P[MX], D[MX], n;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j;
	while(cin >> n){
		memset(P,  0, sizeof P);
		memset(D, -1, sizeof D);
		for(i = 0; i < n; i++) cin >> P[i];
		sort(P, P+n, greater<int>());
		for(i = 0; i < n; i+=2){
			D[i/2] = P[i] - P[i+1];
		}
		sort(D, D+n/2, greater<int>());
		int a, b = -1;
		for(i = 0; i <= n/2; i++){
			a = 0;
			for(j = 0; j < i; j++) a += D[j];
			for(j = i; j < n/2; j++) a -= D[j];
			if (a > 0) {
				b = i;
				break;
			}
		}
		if(b == -1) cout << -1 << endl;
		else 		cout << (n/2 - b) << endl;
	}
}
