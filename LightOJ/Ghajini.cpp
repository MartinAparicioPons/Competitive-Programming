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
 
const ll MX = 100100;

int A[MX], n;

ii T[4*MX];

#define NEUTRAL (0)

inline ii join(ii &a, ii &b){
	ii r;
	r.X = max(a.X, b.X);
	r.Y = min(a.Y, b.Y);
	return r;
}

void create(int i = 1, int l = 0, int r = n - 1){
	if(l == r) T[i] = {A[l], A[l]};
	else {
		create(2*i, l, (l+r)/2);
		create(2*i + 1, (l+r)/2+1, r);
		T[i] = join(T[i*2], T[i*2+1]);
	}
}

ii query(int x, int y, int i = 1, int l = 0, int r = n - 1){
	if(l > y || r < x) return {INT_MIN, INT_MAX};
	if(x <= l && r <= y) return T[i];
	ii a = query(x, y, i*2, l, (l+r)/2);
	ii b = query(x, y, i*2+1, (l+r)/2+1, r);
	return join(a, b);
}


int main() {
	//~ FAST_AS_HELL;
	int tc, t, i, j, d, a, b;
	scanf("%d", &t);
	for(tc = 1; tc <= t; tc++){
		scanf("%d %d", &n, &d);
		for(i = 0; i < n; i++) scanf("%d", &A[i]);
		create();
		ll r = 0;
		for(i = 0; i+d-1 < n; i++){
			ii q = query(i, i+d-1);
			r = max(r, (ll)abs(q.X - q.Y));
		}
		printf("Case %d: %lld\n", tc, r);
	}
}
