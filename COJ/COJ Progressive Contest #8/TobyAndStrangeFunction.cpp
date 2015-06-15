#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
const int MAXN = 32000;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T, i;
	ll n, m;
	string S, O;
	cin >> T;
	while(T--){
		cin >> n >> S;
		m = S.size();
		n %= m;
		O = S;
		for(i = 0; i < m; i++){
			O[(i+n)%m] = S[i];
		}
		cout << O << "\n";
	}
}
