#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define MP make_pair

using namespace std;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 1000000;

bool C[MAXN];
vi P;

void sieve(){
	P.clear();
	memset(C, 0, sizeof C);
	P.push_back(2);
	int i, j;
	for(i = 3; i < MAXN; i+=2) if(!C[i]) {
		P.push_back(i);
		for(j = i+i; j < MAXN; j+=i){
			C[j] = true;
		}
	}
}

int divisors(int n){
	int p = 0, c, d = 1;
	while(n > 1){
		c = 1;
		while(n % P[p] == 0) {n /= P[p]; c++;}
		p++;
		d *= c;
	}
	return d;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, t, m;
	sieve();
	cin >> t;
	while(t--){
		cin >> n;
		int i = 1;
		for(m = 1; divisors(m) <= n; m += ++i);
		cout << m << endl;
	}
}



