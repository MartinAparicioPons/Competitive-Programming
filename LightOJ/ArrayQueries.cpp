#ifndef THE_KNIGHTS_OF_THE_HASH_TABLE
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
 
using namespace __gnu_pbds;
 
//~ typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> PBDS;
using namespace std;        typedef string string;
typedef double ld;      typedef unsigned long long ull;
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
#endif
 
const ll MX = 100010;

int A[MX], n, RMQ[MX][20], L[MX];

void create () {
	int i, j;
	for (i = 0; i < n; i++) L[i] = (int)floor(log((double)i) / log(2.0));
	for (i = 0; i < n; i++) RMQ[i][0] = A[i];
	for (j = 1; (1<<j) <= n; j++) for (i = 0; i + (1<<j) - 1 < n; i++)
		RMQ[i][j] = min(RMQ[i][j - 1], RMQ[i + (1<<(j-1))][j - 1]);
}

int query (int i, int j) {
	int k = L[j - i + 1];
	return min(RMQ[i][k], RMQ[j - (1<<k) + 1][k]);
}


int main() {
	//~ FAST_AS_HELL;
	int tc, t, k, j, i, q, l, r;
	scanf("%d", &t);
	for(tc = 1; tc <= t; tc++){
		scanf("%d", &n);
		scanf("%d", &q);
		
		for(i = 0; i < n; i++) scanf("%d", &A[i]);
		
		create();
		printf("Case %d:\n", tc);
		
		for(i = 0; i < q; i++){
			scanf("%d", &l);
			scanf("%d", &r);
			l--; r--;
			if(l > r) swap(l, r);
			printf("%d\n", query(l, r));
		}
	}
}
