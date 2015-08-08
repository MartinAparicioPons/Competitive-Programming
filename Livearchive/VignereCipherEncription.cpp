#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
const static int DIF = 'Z' - 'A' + 1;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string S, K;
	int i, j, n, m;
	while(cin >> K){
		if(K[0] == '0') return 0;
		cin >> S;
		n = S.size(); m = K.size();
		for(i = 0; i < m; i++){
			K[i] = K[i] - 'A' + 1;
		}
		for(i = 0; i < n; i++) {
			S[i] = (K[i%m] + S[i] - 'A')%DIF + 'A';
		}
		cout << S << "\n";
	}
	return 0;
}
