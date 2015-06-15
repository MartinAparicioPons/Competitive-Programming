#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
const static ll MAXN = 105;

vector<int> R;

bool is_palim(int x){
	int r = 0, a = x;
	while(a){
		r = r*10 + a%10;
		a /= 10;
	}
	return r == x;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T, i, a, b, n;
	for(a = 100; a < 1000; a++){
		for(b = a; b < 1000; b++){
			if(is_palim(a*b) && a*b >= 101101) R.push_back(a*b);
		}
	}
	sort(R.begin(), R.end());
	cin >> T;
	while(T--){
		cin >> n;
		auto x = lower_bound(R.begin(), R.end(), n);
		if(*x == n) cout << n << endl;
		else 	    cout << *(--x) << endl;
	}
}
