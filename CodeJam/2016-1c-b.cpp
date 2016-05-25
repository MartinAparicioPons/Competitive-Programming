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
const static int MX = 55;

ll b, m, C[MX];
bool R[MX][MX];

void cl(){
	memset(C, 0, sizeof C);
	C[b-1] = 1;
	C[b-2] = 1;
	for(int i = b-3; i >= 0; i--){
		C[i] = C[i+1]*2;
	}
}

void rc(int x, ll r){
	if(r == 0 || x == b) return;
	int i, j;
	for(i = x+1; i < b; i++){
		if(C[i] <= r && !R[x][i]){
			rc(i, C[i]);
			r -= C[i];
			R[x][i] = 1;
		}
	}
}

int main() {
	int i, t, tc=1, j;
	cin >> t;
	while(t--){
		memset(R, 0, sizeof R);
		cin >> b >> m;
		cl();
		if(m > C[0]) {
			cout << "Case #" << tc++ << ": IMPOSSIBLE\n";
			continue;
		}
		for(i = 0; i < b-1; i++){
			if(C[i+1] < m) break;
			R[i][i+1] = 1;
		}
		rc(i, m);
		cout << "Case #" << tc++ << ": POSSIBLE\n";
		for(i = 0; i < b; i++) {
			for(j = 0; j < b; j++){
				cout << R[i][j]+0;
			}
			cout << endl;
		}
		
	}
	
	
	
	
		//cout << "Case #" << tc++ << ":" << ans << "\n";
}
