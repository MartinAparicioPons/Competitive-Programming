#include <bits/stdc++.h>
#ifdef DEBUG
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define EL cerr << endl;
#else
#define DB(x)
#define DEB(x)
#define EL
#endif

#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define MP make_pair

using namespace std;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef vector<string> vs;
const static int MAXN = 501000, PR = 29;

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	string S;
	int t;
	cin >> t;
	while(t--){
		cin >> S;
		int i, n = S.size();
		bool ok = true;
		for(i = 1; i*2 < n; i++){
			if(abs(S[i] - S[i-1]) != abs(S[n-i] - S[n-1-i])) {
				ok = false; 
				break;
			}
		}
		cout << ((ok)?"Funny\n":"Not Funny\n");
	}
	return 0;
}



