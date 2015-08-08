#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

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
	ios_base::sync_with_stdio(0); cin.tie(0);
	int P[50], i, j, n, tc;
	for(i = 0, j = 1; i < 31; i++, j*=2){
		P[i] = j-1;
	}
	cin >> tc;
	while(tc--){
		cin >> i;
		cout << P[i] << endl;
	}
}
