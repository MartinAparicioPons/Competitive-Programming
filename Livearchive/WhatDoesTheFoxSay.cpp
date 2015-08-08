#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;

#define F first
#define G second
#define PB push_back

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef pair<string, string> ss;
const static int MAXN = 550;


int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int tc, i, j, n;
	string L, Z;
	set<string> S;
	vector<string> R;
	cin >> tc;
	while(tc--){ 
		getchar();
		getline(cin, L);
		istringstream iss(L);
		S.clear();
		while(iss >> Z){
			S.insert(Z);
		}
		cin >> Z;
		while(cin >> Z, Z == "goes"){
			cin >> Z;
			S.erase(Z);
			cin >> Z;
		}
		cin >> Z;cin >> Z;cin >> Z;
		istringstream iss2(L);
		R.clear();
		while(iss2 >> Z){
			if(S.count(Z)) R.push_back(Z);
		}
		for(int i = 0; i < R.size(); i++){
			cout << R[i] << " \n"[i+1==R.size()];
		}
	}
}
