#include <bits/stdc++.h>
#define EPS 1e-11
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) |= (1<<(x)))
#define CB(m, x) ((m) &= ~(1<<(x)))
#define TB(m, x) ((m) ^= (1<<(x)))

using namespace std; typedef string string;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static ll MX = 100010;


int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	
	int t, n, A[MX], i;
	char B[MX];
	cin >> t;
	while(t--){
		cin >> n;
		bool ok = true;
		for(i = 0; i < n; i++){
			cin >> A[i] >> B[i];
		}
		for(i = 0; i < n-1; i++){
			if(A[i] == A[i+1] || B[i] == B[i+1]) ok = false;
		}
		if(ok) cout << "B\n";
		else cout << "M\n";
	}
}
