#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define MP make_pair

using namespace std;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;       typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 10040;

bool vis[MAXN];
int n, mx, mxi;
vector<int> A[MAXN];

void dfs(int u, int d){
	vis[u] = true;
	if(mx <= d){
		mx = d; mxi = u;
	}
	for(int x : A[u]){
		if(!vis[x]){
			vis[x] = true;
			dfs(x, d+1);
		}
	}
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j;
	while(cin >> n, n >= 0){
		for(i = 0; i <= n; i++) A[i].clear();
		for(i = 1; i < n; i++){
			cin >> j; j--;
			A[i].push_back(j);
			A[j].push_back(i);
		}
		mx = -1; 
		memset(vis, false, sizeof vis);
		dfs(0, 0);
		mx = -1; 
		memset(vis, false, sizeof vis);
		dfs(mxi, 0);
		cout << ((mx % 2 == 0) ? mx/2: mx/2 + 1) << endl;
	}
}
