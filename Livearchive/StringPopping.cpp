#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
	#define endl "\n"
#else
	#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
	#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
	#define EL cerr << endl;
#endif
#define EPS 1e-11
#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) | (1<<(x)))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))

using namespace std;		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 1010, MOD = 9999991;

map<string, bool> DP;

bool dp(string S){
	if(S == "") return true;
	if(S.size() == 1) return false;
	if(DP.count(S) == 0){
		int i, j, k;
		bool ok = false;
		for(i = 0; i + 1 < S.size(); i++){
			if(S[i] == S[i+1]){
				string Z = "";
				for(j = i; S[i] == S[j] && j >= 0; j--);
				for(k = 0; k <= j; k++) Z.PB(S[k]);
				for(j = i+1; S[i] == S[j] && j < S.size(); j++);
				for(k = j; k < S.size(); k++) Z.PB(S[k]);
				if(dp(Z)) {
					ok = true;
					break;
				}
			}
		}
		DP[S] = ok;
	}
	return DP[S];
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t, i, j, n;
	cin >> t;
	string S;
	while(t--){
		cin >> S;
		cout << (dp(S) ? 1 : 0) << endl;
	}
}

