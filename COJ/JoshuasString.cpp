#include <bits/stdc++.h>
#ifdef DEBUG
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define EL cerr << endl;
#else
#define DB(x)
#define DBL(x)
#define EL
#endif

#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define all(xx) xx.begin(), xx.end()
#define hash sdkjfhwieuhoqihfqwekjfhqpqwe

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef pair<ll, ll> pll;
const static int MAXN = 1000010, PR = 29;

struct cmp {
	bool operator() (const string &S, const string &Z){
		return S + Z < Z + S;
	}
};

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int t, n, i, m;
	multiset<string, cmp> SS;
	string S, Z;
	cin >> t;
	while(t--){
		cin >> n;
		SS.clear();
		m = 0;
		for(i = 0; i < n; i++){
			cin >> S;
			m += S.size();
			SS.insert(S);
		}
		S = "";
		while(S.size() <= m){
			if(SS.size() == 0) break;
			Z = *SS.begin();
			S.push_back(Z[0]);
			SS.erase(SS.begin());
			if(Z.size() > 1){
				Z.erase(Z.begin());
				SS.insert(Z);
			}
		}
		cout << S << endl;
	}
	return 0;
}


