#include <bits/stdc++.h>
#define EPS 1e-11
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
#else
	#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
	#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
	#define EL cerr << endl;
#endif
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
const static ll MX = 1000010;

set<int> P[MX];
int A[MX], V[MX], n, T[MX];

#define NEUTRAL (0)

void create(int i, int l, int r){
	if(l == r) T[i] = l;
	else {
		create(2*i, l, (l+r)/2);
		create(2*i + 1, (l+r)/2+1, r);
		T[i] = A[T[i*2]] > A[T[i*2+1]] ? T[i*2] : T[i*2+1];
	}
}

void update(int i, int l, int r, int p){
	if(l > p || r < p) return;
	if(p == l && r == p){
		T[i] = p;
	} else {
		update(i*2, l, (l+r)/2, p);
		update(i*2+1, (l+r)/2+1, r, p);
		T[i] = A[T[i*2]] > A[T[i*2+1]] ? T[i*2] : T[i*2+1];
	}
}

int query(int i, int l, int r, int x, int y){
	if(l > y || r < x) return NEUTRAL;
	if(x <= l && r <= y) return T[i];
	int a = query(i*2, l, (l+r)/2, x, y);
	int b = query(i*2+1, (l+r)/2+1, r, x, y);
	return A[a] > A[b] ? a : b;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j, a, b, q;
	char c;
	while(cin >> n >> q){
		memset(A, 0, sizeof A);
		memset(V, 0, sizeof V);
		memset(T, 0, sizeof T);
		for(i = 0; i < MX; i++) P[i].clear();
		
		for(i = 1; i <= n; i++) cin >> V[i];
		for(i = 0; i <= n; i++){
			if(P[V[i]].size()){
				A[i] = *(--P[V[i]].end());
			} else {
				A[i] = 0;
			}
			P[V[i]].insert(i);
		}
		create(1, 0, n);
		//~ for(i = 0; i <= n; i++) cerr << V[i] << " \n"[i==n];
		//~ for(i = 0; i <= n; i++) cerr << A[i] << " \n"[i==n];
		while(q--){
			cin >> c;
			if(c == 'C'){
				cin >> a >> b;
				auto it = P[V[a]].lower_bound(a);
				auto sig = it; sig++;
				if(sig != P[V[a]].end()){
					//~ DB(*sig); DBL(*it);
					A[*sig] = A[*it];
					update(1, 0, n, *sig);
				}
				P[V[a]].erase(a);
				it = P[b].lower_bound(a);
				if(it != P[b].end()){
					A[*it] = a;
					update(1, 0, n, *it);
				}
				if(it != P[b].begin()){
					--it;
					A[a] = *it;
					update(1, 0, n, a);
				} else {
					A[a] = 0;
					update(1, 0, n, a);
				}
				V[a] = b;
				P[b].insert(a);
				//~ for(i = 0; i <= n; i++) cerr << V[i] << " \n"[i==n];
				//~ for(i = 0; i <= n; i++) cerr << A[i] << " \n"[i==n];
			} else {
				cin >> a;
				int f = query(1, 0, n, 0, a);
				cout << a - A[f] << endl;
			}
		}
		//~ EL;
	}
}



