#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
#define SB(m, x) ((m) | (1<<(x))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))

using namespace __gnu_pbds;
using namespace std;		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 100001;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int F[MX], n, m, i, j, t;
	cin >> t;
	for (int tc = 1; tc <= t; tc++){
		cin >> m >> n;
		memset(F, 0, sizeof F);
		for(i = 0; i < n; i++){
			cin >> j; j--;
			F[j] = 1;
		}
		int r = 0;
		for(i = 0; i < m; i++){
			if(F[i] || (i != 0 && F[i-1]) || (i+1 < m && F[i+1])) r++;
		}
		printf("Case %d: %d\n", tc, r);
	}
}
