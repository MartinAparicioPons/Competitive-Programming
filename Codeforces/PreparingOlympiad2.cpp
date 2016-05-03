#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
const static int MAXN = 15;

int n, l, r, x, m, C[MAXN*2], R, i, s, mini, maxi, bits;

#define bit(x, i) ((x) & (1<<(i)))

int main () {
	cin >> n >> l >> r >> x;
	for(i = 0; i < n; i++) cin >> C[i];
	for(m = 1, R = 0; m <= (1<<n); m++){
		mini = INT_MAX; maxi = INT_MIN; bits = 0;
		for(i = s = 0; i < n; i++){
			if(bit(m, i)){
				bits++;
				s += C[i];
				mini = min(C[i], mini);
				maxi = max(C[i], maxi);
			}
		}
		if(s >= l && s <= r && (maxi - mini >= x) && bits > 1) {
			R++;
		}
	}
	cout << R << endl;
}
