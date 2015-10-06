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

ll hash(string &Z){
	ll h = 0, p = PR;
	for(int i = 0; i < Z.size(); i++){
		h += (Z[i] - 'a' + 1)*p;
		p *= PR;
	}
	return h;
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	string S, Z;
	map<ll, int> M;
	int n, t, i, j;
	cin >> t;
	while(t--){
		cin >> S;
		M.clear();
		n = S.size();
		for(i = 0; i < n; i++){
			for(j = 1; j <= n-i; j++){
				Z = S.substr(i, j);
				DBL(Z);
				sort(all(Z));
				M[hash(Z)]++;
			}
		}
		ll r = 0;
		for(auto p : M){
			r += (p.Y * (p.Y - 1)) / 2;
		}
		cout << r << endl;
	}
}
