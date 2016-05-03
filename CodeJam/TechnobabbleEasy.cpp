#include <bits/stdc++.h>
#define EPS 1e-11
#define LB 1e11
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
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MX = 101001;


int main() {
	int t, tc=0, n, i, j, m;
	string S[17][2];
	cin >> t;
	while(tc++ < t){
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> S[i][0] >> S[i][1];
		}
		int mm = 0; bool ok[2], tt;
		for(m = 0; m < (1<<n); m++){
			tt = true;
			for(i = 0; i < n; i++) if(GB(m, i)){
				ok[0] = ok[1] = false;
				for(j = 0; j < n; j++) if(GB(m, j) == 0){
					if(S[i][0] == S[j][0]) ok[0] = true;
					if(S[i][1] == S[j][1]) ok[1] = true;
				}
				if(!(ok[0] && ok[1])) {
					tt = false;
					break;
				}
			}
			if(tt) mm = max(mm, __builtin_popcount(m));
		}
		cout << "Case #" << tc << ": "<< mm << "\n";
	}
	
	
	
}
