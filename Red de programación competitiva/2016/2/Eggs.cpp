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

int P[MX];

void sieve(){
	int i, j;
	for(i = 0; i < MX; i++) P[i] = i;
	for(i = 2; i < MX; i++) if(P[i] == i){
		for(j = i+i; j < MX; j+=i) 
			P[j] = i;
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	sieve();
	int i, j, n;
	while(cin >> n){
		int m = 0;
		if(n == 1) {
			cout << 1 << endl;
			continue;
		}
		while(n > 1){
			m++;
			n -= P[n];
		}
		cout << m << endl;
	}
}
