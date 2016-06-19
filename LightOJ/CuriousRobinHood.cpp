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
 
const ll MX = 200100;

int A[MX], n, F[MX];

void update(int x, int v){
	for(; x <= n; x += x&-x) F[x] += v;
}

int query(int x){
	int r = 0;
	for(; x > 0; x -= x&-x) r += F[x];
	return r;
}

int query(int x, int y){
	return query(y) - query(x-1);
}

int main() {
	//~ FAST_AS_HELL;
	int tc, t, i, j, q, a, b, c;
	scanf("%d", &t);
	for(tc = 1; tc <= t; tc++){
		printf("Case %d:\n", tc);
		scanf("%d %d", &n, &q);
		for(i = 0; i < n; i++) scanf("%d", &A[i]);
		memset(F, 0, sizeof F);
		for(i = 0; i < n; i++) update(i+1, A[i]);
		for(i = 0; i < q; i++){
			scanf("%d %d", &a, &b);
			if(a == 1){
				printf("%d\n", A[b]);
				update(b+1, -A[b]);
				A[b] = 0;
			} else if(a == 2) {
				scanf("%d", &c);
				update(b+1, c);
				A[b] += c;
			} else {
				scanf("%d", &c);
				printf("%d\n", query(b+1, c+1));
			}
		}
	}
}
