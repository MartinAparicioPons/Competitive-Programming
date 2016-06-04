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
#define EPS 1e-11
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
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 100010, INF = 2000000000, NEUTRAL = MX-1;

int n, m, A[MX], T[4*MX], DP[MX], RSQ[MX];
pair<int, pair<int, int> > S[MX]; // Shop: {position, length, cost}


void create(int i, int l, int r){
	if(l == r) T[i] = l;
	else {
		create(2*i, l, (l+r)/2);
		create(2*i + 1, (l+r)/2+1, r);
		T[i] = DP[T[i*2]] < DP[T[i*2+1]] ? T[i*2] : T[i*2+1];
	}
}

void update(int i, int l, int r, int p){
	if(l > p || r < p) return;
	if(p == l && r == p){
		T[i] = p;
	} else {
		update(i*2, l, (l+r)/2, p);
		update(i*2+1, (l+r)/2+1, r, p);
		T[i] = DP[T[i*2]] < DP[T[i*2+1]] ? T[i*2] : T[i*2+1];
	}
}

int query(int i, int l, int r, int x, int y){
	if(l > y || r < x) return NEUTRAL;
	if(x <= l && r <= y) return T[i];
	int a = query(i*2, l, (l+r)/2, x, y);
	int b = query(i*2+1, (l+r)/2+1, r, x, y);
	return DP[a] < DP[b] ? a : b;
}



int main(){
	int i, j, a;
	while(cin >> n >> m){
		for(i = 0; i < n; i++) cin >> A[i];
		for(i = 0; i < m; i++) {
			cin >> S[i].X >> S[i].Y.X >> S[i].Y.Y;
			S[i].X--;
		}
		sort(S, S+m);
		fill(DP, DP+n, INF);
		memset(T, 0, sizeof T);
		DP[NEUTRAL] = INF;
		create(1, 0, n+1);
		RSQ[0] = 0;
		for(i = 1; i <= n; i++) RSQ[i] = RSQ[i-1] + A[i-1];
		for(i = 0; i < m; i++){
			//~ DB(*upper_bound(RSQ, RSQ+n+1, RSQ[S[i].X] + S[i].Y.X));
			//~ DB(RSQ[S[i].X]); DBL(S[i].Y.X);
			S[i].Y.X = (upper_bound(RSQ, RSQ+n+1, RSQ[S[i].X] + S[i].Y.X) - RSQ - 1);
			//~ DB(S[i].X); DB(S[i].Y.X); DBL(S[i].Y.Y);
		}
		DP[n] = 0;
		update(1, 0, n+1, n);
		for(i = n-1, j = m-1; i >= 0; i--) {
			for(; j >= 0 && S[j].X == i; j--){
				DP[i] = min(DP[i], S[j].Y.Y + DP[query(1, 0, n+1, i+1, S[j].Y.X)]);
				//~ DB(i); DB(DP[i]); DB(DP[query(1, 0, n+1, i+1, S[j].Y.X)]);
				//~ DB(S[j].X); DB(S[j].Y.X); DBL(S[j].Y.Y);
				update(1, 0, n+1, i);
			}
		}
		//~ for(i = 0; i <= n; i++) DB(DP[i]);
		if(DP[0] >= INF) cout << -1 << endl;
		else cout << DP[0] << endl;
	}
}

