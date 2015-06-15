#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef map<ll, ll> mm;
const int MAXN = 32000;

mm T, I;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n, i;
	for(i = 0; i < MAXN; i++){
		T[(i*(i+1))/2] = i;
	}
	while(cin >> n, n){
		auto t = (T.upper_bound(n));
		if(t->first == n){
			cout << (n+1) << " " << (t->second + 1) << "\n";
		} else {
			cout << (t->first - n) << " " << t->second << "\n";
		}
	}
}
