#include <bits/stdc++.h>
#ifdef DEBUG
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define EL cerr << endl;
#else
#define DB(x)
#define DBL(x)
#define EL
#endif

#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define hash sdkjfhwieuhoqihfqwekjfhqpqwe

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef set<int> si;
typedef set<ll> sll; 		typedef set<string> ss;
const static int MAXN = 100100;

//Start LCA
#define LOGK 22
int n, idx, L[MAXN*2], E[MAXN*2], H[MAXN], RMQ[MAXN*2][LOGK];
ll RSQ[MAXN];
vii tree[MAXN];
void dfs (int u, int f, int depth) {
	int i;
	H[u] = idx;
	E[idx] = u;
	L[idx++] = depth;
	for (i=0; i<tree[u].size(); i++) {
		ii v = tree[u][i];
		RSQ[v.X] = RSQ[u] + v.Y;
		if (v.X != f) {
			dfs(v.X, u, depth + 1);
			E[idx] = u;
			L[idx++] = depth;
		}
	}
}
void create_rmq_table () {
	int i, j, n2 = n*2-1;
	for (i=0; i<n2; i++) RMQ[i][0] = i;
	for (j=1; (1<<j)<=n2; j++) {
		for (i=0; i+(1<<j)-1<n2; i++) {
			if (L[RMQ[i][j-1]] <= L[RMQ[i+(1<<(j-1))][j-1]]) RMQ[i][j] = RMQ[i][j-1];
			else RMQ[i][j] = RMQ[i+(1<<(j-1))][j-1];
		}
	}
}
int rmq (int i, int j) {
	int k = (int)floor(log((double)j-i+1) / log(2.0));
	if (L[RMQ[i][k]] <= L[RMQ[j-(1<<k)+1][k]]) return RMQ[i][k];
	else return RMQ[j-(1<<k)+1][k];
}
int lca (int i, int j) { 
	if (H[i] > H[j]) swap(i, j);
	return rmq(H[i], H[j]);
}
//End LCA

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int a, l, q, i, j;
	while(cin >> n, n){
		for(i = 0; i < n; i++) tree[i].clear();
		for(i = 1; i < n; i++){
			cin >> a >> l;
			tree[a].PB({i, l});
		}
		memset(RSQ, 0, sizeof RSQ);
		idx = 0;
		dfs(0, -1, 0);
		create_rmq_table();
		cin >> q;
		while(q--){
			cin >> a >> l;
			int p = lca(a, l);
			cout << (RSQ[a] + RSQ[l] - 2*RSQ[E[p]]) << " \n"[!q];
		}
	}
}
