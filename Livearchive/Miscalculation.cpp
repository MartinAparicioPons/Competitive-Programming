#ifndef THE_KNIGHTS_OF_THE_HASH_TABLE
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
typedef double ld;      	typedef unsigned long long ull;
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
#endif

const int MX = 500;

string S;
int n, A[MX], O[MX];

int main () {
	FAST_AS_HELL;
	int i, j, r;
	while(cin >> S){
		cin >> r;
		j = 0;
		O[0] = 0;
		for(i = 0; i < S.size(); i++){
			if(S[i] >= '0' && S[i] <= '9') A[j++] = S[i] -'0';
			else O[j] = S[i] == '*';
		}
		ll a, b;
		a = b = 0;
		for(i = 0; i < j; i++) a = (O[i] ? a * A[i] : a + A[i]);
		for(i = 0; i < j; i++) {
			DB(b);
			if(i+1 < j && O[i+1]) {
				ll c = A[i];
				for(; O[i+1] && i+1 < j; i++) c *= A[i+1];
				DB(c);
				b += c;
			} else {
				DB(A[i]);
				b += A[i];
			}
			EL;
		}
		DB(a); DB(b); EL;
		if(a == b && a == r) cout << "U" << endl;
		else if(b == r) cout << "M" << endl;
		else if(a == r) cout << "L" << endl;
		else cout << "I" << endl;
	}
}
