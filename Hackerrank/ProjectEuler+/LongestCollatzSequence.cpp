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
typedef vector<ll> vll;       typedef vector<string> vs;
const static int MAXN = 100000000, MX = 5000010;

int DP[MAXN], P[MX];

int collatz(ll n){
	if(n == 1) return 1;
	if(n >= MAXN){
		if(n % 2) return 1 + collatz(n*3ll + 1ll);
		else 	  return 1 + collatz(n/2ll);
	}
	if(DP[n] == -1){
		if(n % 2) DP[n] = 1 + collatz(n*3ll + 1ll);
		else 	  DP[n] = 1 + collatz(n/2ll);
	}
	return DP[n];
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t, n, i;
	memset(DP, -1, sizeof DP);
	
	int m = 0, mi = 1;
	for(i = 1; i < MX; i++){
		if(m <= collatz(i)){
			m = collatz(i);
			mi = i;
		}
		P[i] = mi;
	}
	
	cin >> t;
	while(t--){
		cin >> n;
		cout << P[n] << "\n";
	}
}



