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
	vi G[MX];
	bool E[MX];
	int I[MX], n, m, k, i, j, t, a, b;
	cin >> t;
	while(t--) {
		cin >> n >> k >> m;
		for(i = 0; i <= n; i++) I[i] = 0;
		for(i = 0; i <= n; i++) E[i] = false;
		for(i = 0; i <= n; i++) G[i].clear();
		while(m--){
			cin >> a >> b;
			G[a].PB(b);
			G[b].PB(a);
			I[a]++;
			I[b]++;
		}
		bool ok = true;
		while(ok){
			ok = false;
			for(i = 1; i <= n; i++) if(!E[i] && I[i] < k){
				for(int x : G[i]) if(!E[x]) {
					I[x]--;
				}
				I[i] = 0;
				E[i] = true;
				ok = true;
			}
		}
		int r = 0;
		for(i = 1; i <= n; i++) if(!E[i] && I[i] >= k) r++;
		cout << r << endl;
	}
}

