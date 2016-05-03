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
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 500006;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t, n, m, i, j, A[MAXN];
    ll r, o;
    cin >> t;
    while(t--){
		cin >> n >> m;
		for(i = 0; i < m; i++){
			cin >> A[i];
		}
		sort(A, A+m);
		
		o = 0; r = 1;
		for(i = 0; i < m; i++){
			while(r < m && A[i]--) r++, o++;
			r++;
		}
		cout << o << endl;
	}
}
