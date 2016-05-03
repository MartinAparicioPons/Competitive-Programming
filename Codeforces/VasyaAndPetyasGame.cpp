#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
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
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 50400;

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	bool P[MAXN];
	int i, n, j;
	set<int> PP;
	memset(P, true, sizeof P);
	cin >> n;
	for(i = 2; i < n*2; i++)
		for(j = 2; j < i; j++)
			if(i%j == 0)
				P[i] = false;
	
	for(i = 2; i < n*2; i++) if(P[i]){
		int r = i;
		for(j = 0; j < 400; j++){
			r *= i;
			PP.insert(r);
		}
	}
	vi R;
	for(i = 2; i <= n; i++)
		if(PP.count(i) || P[i]) R.push_back(i);
	
	cout << R.size() << endl;
	for(auto x : R) cout << x << " ";
	cout << endl;
}





