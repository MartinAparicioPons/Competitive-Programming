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

#define GB(m, x) ((x) & (1<<(m)))
#define SB(m, x) ((m) |= (1<<(x)))
#define CB(m, x) ((m) &= ~(1<<(x)))
#define TB(m, x) ((m) ^= (1<<(x)))

using namespace std; typedef string string;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MX = 10101;

set<string> R;
string S;
bool DP[2][MX];

void dp(int x, bool is3){
	if(x <= 5) return;
	if(DP[is3?1:0][x]) return;
	DP[is3?1:0][x] = true;
	string P, Q, O;
	P = S.substr(x+1, is3 ? 3 : 2);
	DB(P);
	Q = S.substr(x-1, 2);
	if(x != 6) {
		O = S.substr(x-2, 3);
		R.insert(O);
	}
	R.insert(Q);
	if(P != Q) dp(x - 2, false);
	if(x != 6 && P != O) dp(x - 3, true);
}

int main() {
	while(cin >> S){
		R.clear();
		memset(DP, 0, sizeof DP);
		S = S + "$$$";
		dp(S.size() - 4, false);
		cout << R.size() << endl;
		for(auto &X : R){
			cout << X << endl;
		}
	}
}
