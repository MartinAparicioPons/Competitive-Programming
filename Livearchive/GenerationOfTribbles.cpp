#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
	#define endl "\n"
#else
	#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
	#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
	#define EL cerr << endl;
#endif
#define EPS 1e-11
#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) | (1<<(x)))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))

using namespace std;		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 2020;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll DP[MX], i, j, n, t;
	DP[0] = DP[1] = 1;
	DP[2] = 2; DP[3] = 4;
	for(i = 4; i < 80; i++){
		DP[i] = DP[i-1] + DP[i-2] + DP[i-3] + DP[i-4];
	}
	cin >> t;
	while(t--){
		cin >> n;
		cout << DP[max(n, 0ll)] << endl;
	}
}

