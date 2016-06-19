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
 
const ll MX = 30010;

int A[MX], n, P[MX], N[MX];

int main() {
	//~ FAST_AS_HELL;
	int tc, t, k, j, i, q, l, r;
	stack<int> S;
	scanf("%d", &t);
	for(tc = 1; tc <= t; tc++){
		scanf("%d", &n);
		
		for(i = 0; i < n; i++) scanf("%d", &A[i]);
		
		for(i = 0; i < n; i++){
			while(S.size() && A[S.top()] >= A[i]) S.pop();
			if(!S.size()) P[i] = -1;
			else P[i] = S.top();
			S.push(i);
		}
		while(S.size()) S.pop();

		for(i = n-1; i >= 0; i--){
			while(S.size() && A[S.top()] >= A[i]) S.pop();
			if(!S.size()) N[i] = n;
			else N[i] = S.top();
			S.push(i);
		}
		while(S.size()) S.pop();
		
		int mx = 0;
		for(i = 0; i < n; i++) mx = max(mx, (N[i] - P[i] - 1)*A[i]);
		printf("Case %d: %d\n", tc, mx);
	}
}
