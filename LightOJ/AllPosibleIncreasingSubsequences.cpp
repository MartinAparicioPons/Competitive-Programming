#ifndef THE_KNIGHTS_OF_THE_HASH_TABLE
//~ #include <ext/pb_ds/assoc_container.hpp>
//~ #include <ext/pb_ds/tree_policy.hpp>
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
#define FAST_AS_HELL ios_base::sync_with_stdio(0); cin.tie(0);
#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define SQ(x) ((x)*(x))
 
#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) | (1<<(x)))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))
 
//~ using namespace __gnu_pbds;
//~ typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> PBDS;
using namespace std;        typedef string string;
typedef double ld;      	typedef unsigned long long ull;
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
#endif
 
const ll MX = 100100, MOD = 1000000007;

int n, F[MX];
ii A[MX];

void update(int x, int v){
	for(; x <= n; x += x&-x) F[x] = (F[x] + v) % MOD;
}

int query(int x){
	int r = 0;
	for(; x > 0; x -= x&-x) r = (r + F[x]) % MOD;
	return r;
}

int query(int x, int y){
	return (query(y) - query(x-1) + MOD) % MOD;
}

struct cmp {
	bool operator()(const ii &a, const ii &b) const {
		return a.X == b.X ? a.Y > b.Y : a.X < b.X;
	}
};

int main() {
	//~ FAST_AS_HELL;
	int tc, t, a, i;
	scanf("%d", &t);
	for(tc = 1; tc <= t; tc++){
		scanf("%d", &n);
		memset(F, 0, sizeof F);
		for(i = 1; i <= n; i++) {
			scanf("%d", &a);
			A[i] = {a, i};
		}
		sort(A+1, A+n+1, cmp());
		int r = 0;
		for(i = 1; i <= n; i++){
			a = query(1, A[i].Y) + 1;
			r = (r + a) % MOD;
			update(A[i].Y, a);
		}
		
		printf("Case %d: %d\n", tc, r);
	}
}
