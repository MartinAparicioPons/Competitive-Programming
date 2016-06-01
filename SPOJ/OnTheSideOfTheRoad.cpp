#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
#else
	#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
	#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
	#define EL cerr << endl;
#endif
#define EPS (1e-11)
#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) | (1<<(x)))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))

using namespace std; 		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<int, int> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 1010;

#define INF (1e11)

typedef pair<double, double> dd;

struct cmp {
	bool operator()(const dd x, const dd y) const {
		if(fabs(x.X - y.X) > EPS)
			return x.X < y.X;
		return fabs(x.Y - y.Y) > EPS && x.Y < y.Y;
	}
};
struct cmpd {
	bool operator()(const double x, const double y) const {
		return fabs(x - y) > EPS && x < y;
	}
};

dd cut(dd a, dd b){
	if(a.X == b.X) return {INF, 0};
	return {a.Y + (-a.X)*(b.Y - a.Y) / (b.X - a.X), 
			(b.Y - a.Y) / (b.X - a.X)};
}

int find(ll x){
	ll l = 0, r = INT_MAX, m;
	while(l < r){
		m = (l + r + 1) / 2;
		if(m*(m-1) <= 2*x) l = m;
		else r = m - 1;
	}
	return l;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, i, j;
	ii A[MX];
	map<dd, int, cmp> M;
	cin >> n;
	for(i = 0; i < n; i++) cin >> A[i].Y >> A[i].X;
	for(i = 0; i < n; i++) {
		for(j = 0; j < i; j++) {
			M[cut(A[i], A[j])]++;
		}
	}
	if(M.find({INF, 0}) != M.end())
		M.erase(M.find({INF, 0}));
	map<double, ii, cmpd> R;
	for(auto x : M){
		//~ DB(x.X.X); DB(x.X.Y); DBL(x.Y);
		ii r;
		r = R[x.X.X];
		r.X++;
		r.Y += find(x.Y);
		R[x.X.X] = r;
	}
	set<int> S;
	S.insert(n);
	for(auto x : R){
		S.insert(x.Y.X + n - x.Y.Y);
	}
	cout << S.size() << endl;
}



