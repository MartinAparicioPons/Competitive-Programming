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

bool has(string A, string B){
	for(int i = 0; i < B.size(); i++){
		bool ok = false;
		for(int j = 0; j < A.size(); j++) if(A[j] == B[i]) ok = true;
		if(!ok) return false;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string S[MX], Z;
	int t, i, j, n;
	cin >> t;
	while(t--){
		cin >> Z;
		cin >> n;
		for(i = 0; i < n; i++) cin >> S[i];
		bool sol = true;
		set<char> K;
		for(char c = 'A'; c <= 'Z'; c++) {
			K.insert(c);
		}
		for(i = 0; i < n; i++){
			if(has(S[i], Z)){
				for(char c : K){
					if(S[i].find(c) == string::npos){
						K.erase(c);
					}
				}
			} else {
				for(j = 0; j < S[i].size(); j++){
					K.erase(S[i][j]);
				}
			}
		}
		if(K.size()) cout << (*K.begin()) << endl;
		else cout << "No Solution\n";
	}
}
