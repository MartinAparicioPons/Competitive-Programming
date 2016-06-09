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
const static ll MX = 10000001;

int L[4*MX], n;

void create(){
	memset(L, 0, sizeof L);
	n = 10000000;
}

void update(int x, int y, int c, int i = 1, int l = 0, int r = n-1){
	if(x > r || l > y) return;
	if(x <= l && r <= y) L[i] = c;
	else {
		int m = (l+r)/2;
		if(L[i]) {
			L[i*2] = L[i*2+1] = L[i];
			L[i] = 0;
		}
		update(x, y, c, i*2  , l  , m);
		update(x, y, c, i*2+1, m+1, r);
	}
}

void query(set<int> &S, int i = 1, int l = 0, int r = n-1){
	if(L[i]){
		S.insert(L[i]);
	} else {
		if(r == l) return;
		int m = (l+r)/2;
		query(S, i*2, l, m);
		query(S, i*2+1, m+1, r);
	}
}

int query(){
	set<int> S;
	query(S);
	return S.size();
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t, n, i, l, r;
	cin >> t;
	while(t--){
		create();
		cin >> n;
		for(i = 1; i <= n; i++){
			cin >> l >> r;
			if(l > r) swap(l, r);
			update(l-1, r-1, i);
		}
		//~ for(i = 0; i < 10; i++) cerr << L[i] << "\t"; EL;
		cout << query() << endl;
	}
}
