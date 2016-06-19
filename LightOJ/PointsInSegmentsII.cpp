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
 
const ll MX = 50100;

int main() {
	//~ FAST_AS_HELL;
	int tc, t, i, j, q, n, RSQ[MX], R[MX], B[MX];
	ii A[MX], Q[MX];
	scanf("%d", &t);
	for(tc = 1; tc <= t; tc++){
		printf("Case %d:\n", tc);
		scanf("%d %d", &n, &q);
		for(i = 0; i < n; i++) scanf("%d %d", &A[i].X, &A[i].Y);
		for(i = 0; i < q; i++) {
			scanf("%d", &Q[i].X);
			Q[i].Y = i;
		}
		sort(Q, Q+q);
		memset(RSQ, 0, sizeof RSQ);
		memset(R, 0, sizeof R);

		for(i = 0; i < q; i++) B[i] = Q[i].X;
		for(i = 0; i < n; i++){
			int x = lower_bound(B, B+q, A[i].X) - B;
			int y = upper_bound(B, B+q, A[i].Y) - B;
			RSQ[x+1]++;
			RSQ[y+1]--;
		}
		for(i = 1; i <= q; i++) {
			RSQ[i] += RSQ[i-1];
			R[Q[i-1].Y] = RSQ[i];
		}
		for(i = 0; i < q; i++) printf("%d\n", R[i]);
	}
}
