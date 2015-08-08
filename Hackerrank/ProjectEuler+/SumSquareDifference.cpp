#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

#define F first
#define G second

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;
const static int MAXN = 15000;

ll T[MAXN], R[MAXN], n;
	
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int tc, n, i, j;
	T[0] = R[0] = 0;
	for(i = 1; i < MAXN; i++){
		T[i] = T[i-1] + i;
		R[i] = R[i-1] + i*i;
	}
	cin >> tc;
	while(tc--){
		cin >> n;
		cout << abs(T[n]*T[n] - R[n]) << endl;
	}
}
