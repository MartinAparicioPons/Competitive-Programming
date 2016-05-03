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
const static int MAXN = 5000006;

ll dist(ii a, ii b){
	return abs(a.X - b.X) + abs(a.Y - b.Y);
}

ii M[MAXN];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int m, n, j, i, t;
    cin >> t;
    while(t--){
		cin >> n;
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				cin >> m;
				M[m] = {i, j};
			}
		}
		ll r = 0;
		for(i = 2; i <= n*n; i++){
			r += dist(M[i-1], M[i]);
		}
		cout << r << endl;
	}
}
