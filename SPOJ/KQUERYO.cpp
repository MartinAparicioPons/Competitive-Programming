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
const static ll MX = 100010;

vi T[4*MX];
int n, A[MX];
#define NEUTRAL (0)
#define M(l, r) (((l)+(r))/2)


void create(int i = 1, int l = 0, int r = n-1){
	if(l == r){
		T[i].PB(A[l]);
		return;
	}
	create(i*2  , l       , M(l,r));
	create(i*2+1, M(l,r)+1, r);
	merge(T[i*2].begin()  , T[i*2].end(), 
		  T[i*2+1].begin(), T[i*2+1].end(),
		  back_inserter(T[i]));
	sort(T[i].begin(), T[i].end());
}


int query(int x, int y, int k, int i = 1, int l = 0, int r = n-1){
	if(l > y || r < x) return 0;
	if(x <= l && r <= y){
		return T[i].end() - upper_bound(T[i].begin(), T[i].end(), k);
	}
	return query(x, y, k, i*2  , l       , M(l,r)) 
		 + query(x, y, k, i*2+1, M(l,r)+1, r);
}


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int q, i, j;
	cin >> n;
	for(i = 0; i < n; i++) {
		cin >> A[i];
	}
	
	create();
	
	cin >> q;
	int lq = 0, l, r, k;
	for(i = 0; i < q; i++) {
		cin >> l >> r >> k;
		l = lq^l;
		r = lq^r;
		k = lq^k;
		l--, r--;
		lq = query(l, r, k);
		cout << lq << endl;
	}
}
