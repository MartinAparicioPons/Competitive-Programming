#include <bits/stdc++.h>
#define EPS 1e-11
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) |= (1<<(x)))
#define CB(m, x) ((m) &= ~(1<<(x)))
#define TB(m, x) ((m) ^= (1<<(x)))

using namespace std; typedef string string;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static ll MX = 1100;


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int RSQ[MX][MX], i, j, m, n, k, f, b, t;
	char M[MX][MX];
	cin >> t;
	while(t--){
		memset(RSQ, 0, sizeof RSQ);
		cin >> n >> m >> k;
		for(i = 0; i < n; i++){
			cin >> M[i];
		}
		while(k--){
			ii x, y;
			cin >> x.X >> x.Y >> y.X >> y.Y;
			swap(x.X, x.Y);
			swap(y.X, y.Y);
			x.X = n + 1 - x.X;
			y.X = n + 1 - y.X;
			for(i = y.X; i <= x.X; i++){
				RSQ[i][x.Y]++;
				RSQ[i][y.Y+1]--;
			}
		}
		int r = b = 0;
		for(i = 0; i <= n+1; i++){
			for(j = 1; j <= m+1; j++){
				RSQ[i][j] += RSQ[i][j-1];
			}
		}
		for(i = 1; i <= n; i++) for(j = 1; j <= m; j++){			
			if(RSQ[i][j] > 0){
				r += M[i-1][j-1] == 'R';
				b += M[i-1][j-1] == 'B';
			}
		}
		cout << b << " " << r << endl;
	}
}
