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
 
const ll MX = 30010;

int A[MX], n, RMQ[MX][20], L2[MX];

void create () {
	int i, j;
	for (i = 0; i <= n; i++) L2[i] = (int)floor(log((double)i) / log(2.0));
	for (i = 0; i < n; i++) RMQ[i][0] = i;
	for (j = 1; (1<<j) <= n; j++) {
		for (i = 0; i + (1<<j) - 1 < n; i++) {
			if (A[RMQ[i][j - 1]] <= A[RMQ[i + (1<<(j - 1))][j - 1]]) 
				 RMQ[i][j] = RMQ[i][j - 1];
			else RMQ[i][j] = RMQ[i + (1<<(j - 1))][j - 1];
		}
	}
}

int query (int i, int j) {
	if(i < 0 || j < i) return 0;
	j = min(j, n);
	int k = L2[j - i + 1]; 
	if (A[RMQ[i][k]] <= A[RMQ[j - (1<<k) + 1][k]]) return RMQ[i][k];
	else return RMQ[j - (1<<k) + 1][k];
}


int dc(int l, int r) {
	if(l > r)  return 0;
	if(l == r) return A[l];
	int m = query(l, r);
	return max(dc(l, m-1), max(dc(m+1, r), (r-l+1)*A[m]));
}

int main() {
	//~ FAST_AS_HELL;
	int tc, t, k, j, i, q, l, r;
	scanf("%d", &t);
	for(tc = 1; tc <= t; tc++){
		scanf("%d", &n);
		
		for(i = 0; i < n; i++) scanf("%d", &A[i]);
		
		create();
		printf("Case %d: %d\n", tc, dc(0, n-1));
	}
}
