#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;

#define F first
#define G second
#define PB push_back

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef pair<string, string> ss;
const static int MAXN = 100010;

int A[MAXN], n;
unordered_map<string, int> M;

ll FT[MAXN];
void update(int p, ll v){
	for(; p <= n; p += (p&(-p))) FT[p] += v;
}
ll query(int p){
	ll a = 0ll;
	for(; p >  0; p -= (p&(-p))) a += FT[p];
	return a;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i;
	ll r;
	string S;
	while(cin >> n, n){
		M.clear();
		memset(FT, 0, sizeof FT);
		for(i = 1; i <= n; i++){
			cin >> S;
			M[S] = i;
			update(i, 1ll);
		}
		for(i = 1; i <= n; i++){
			cin >> S;
			A[i] = M[S];
		}
		r = 0ll;
		for(i = 1; i <= n; i++){
			r += query(A[i] - 1ll);
			update(A[i], -1ll);
		}
		cout << r << endl;
	}
}
