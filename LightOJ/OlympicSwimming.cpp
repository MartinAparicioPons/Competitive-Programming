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
const static int MAXN = 50050, PR = 5003;

int RSQ[33][MAXN], A[MAXN];
ll H[33];
vector<pair<ll, int> > V;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t, tc = 1, l, k, n, p, i, j;
	while(cin >> l >> k, l || k){
		V.clear();
		l++;
		for(i = 0; i < k; i++){
			memset(A, 0, sizeof A);
			cin >> n;
			for(j = 0; j < n; j++){
				cin >> p;
				A[p]++;
			}
			RSQ[i][0] = 0;
			for(j = 0; j < l; j++){
				RSQ[i][j+1] = RSQ[i][j] + A[j];
			}
		}
		int mx;
		ll pp;
		for(j = 0; j < l; j++){
			H[j] = 0;
			mx = 0;
			for(i = 0; i < k; i++){
				mx = max(mx, RSQ[i][j]);
			}
			pp = 1ll;
			for(i = 0; i < k; i++){
				H[j] += pp * (mx - RSQ[i][j] + 1);
				pp *= PR;
			}
			V.push_back({H[j], j});
		}
		sort(V.begin(), V.end());
		mx = 0;
		for(i = 1; i < l; i++){
			int st = i-1;
			while(i < l && V[i].X == V[i-1].X) i++;
			mx = max(mx, V[i-1].Y - V[st].Y);
		}
		cout << "Case " << tc++ << ": " << mx << " meter(s)\n";
	}
}
