#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef vector<ii> vii;
const int MAXN = 1000010;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, r;
	while(cin >> n, n){
		if(n <= 101) cout << "f91(" << n << ") = 91\n";
		else 		 cout << "f91(" << n << ") = " << (n-10) << "\n";
	}
	
	return 0;
}
