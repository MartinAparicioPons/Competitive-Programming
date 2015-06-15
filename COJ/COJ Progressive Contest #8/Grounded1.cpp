#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
const static int MOD = 1000000007;

int S[20];

#define bit(x, i) ((x) & (1<<i))

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, k, m, x, i, r;
	for(i = 0; i < 16; i++){
		S[i] = i;
	}
	while(cin >> n >> k){
		for(m = r = 0; m < (1<<(1<<n)); m++){
			for(x = 0, i = 0; i < 20; i++){
				if(bit(m, i)){
					x ^= S[i];
				}
			}
			r = ( r + (__builtin_popcount(x) == k))%MOD;
		}
		cout << r << "\n";
	}
}
