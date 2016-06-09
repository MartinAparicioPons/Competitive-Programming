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
const static ll MX = 30010, MQ = 200010;

int T[4*MX];
int n;
#define NEUTRAL (0)
#define MID(l, r) (((l)+(r))/2)

void create(){
	memset(T, 0, sizeof T);
}

int query(int x, int y, int i = 1, int l = 0, int r = (n-1)){
	if(l > y || r < x) return T[NEUTRAL];
	if(x <= l && r <= y) return T[i];
	return query(x, y, i*2  , l         , MID(l,r)) 
		 + query(x, y, i*2+1, MID(l,r)+1, r);
}

void update(int x, int i = 1, int l = 0, int r = (n-1)){
	if(l > x || r < x) return;
	if(l == x && r == x) {T[i] = 1; return;}
	update(x, i*2  , l          , MID(l, r));
	update(x, i*2+1, MID(l, r)+1, r);
	T[i] = T[i*2] + T[i*2+1];
}

int B[MX];
pair<int, int> C[MX];
typedef pair<int, pair<pair<int, int>, pair<int, int>>> query_data;
query_data Q[MQ];
int R[MQ];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int q, i, j;
	cin >> n;
	for(i = 0; i < n; i++) {
		cin >> B[i];
		C[i].X = B[i];
		C[i].Y = i;
	}
	sort(C, C+n, greater<pair<int,int>>());
	
	create();
	
	cin >> q;
	for(i = 0; i < q; i++) {
		cin >> Q[i].Y.X.X >> Q[i].Y.X.Y >> Q[i].X;
		Q[i].Y.Y.X = i;
		
		if(Q[i].Y.X.X > Q[i].Y.X.Y) swap(Q[i].Y.X.X, Q[i].Y.X.Y);
		Q[i].Y.X.X--;
		Q[i].Y.X.Y--;
	}
	sort(Q, Q+q, greater<query_data>());
	
	for(i = j = 0; i < q; i++){
		for(; C[j].X > Q[i].X && j < n; j++){
			update(C[j].Y);
		}
		Q[i].Y.Y.Y = query(Q[i].Y.X.X, Q[i].Y.X.Y);
	}
	for(i = 0; i < q; i++){
		R[Q[i].Y.Y.X] = Q[i].Y.Y.Y;
	}
	for(i = 0; i < q; i++) cout << R[i] << endl;
}
