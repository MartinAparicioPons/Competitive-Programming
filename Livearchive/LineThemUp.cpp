#include <bits/stdc++.h>
#define EPS 1e-11
#define LB 1e11
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
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MX = 101000;

int main() {
	int n, i;
	string A[22], B[22], C[22];
	while(cin >> n){
		for(i = 0; i < n; i++){
			cin >> A[i];
			C[i] = B[i] = A[i];
		}
		sort(C, C+n, greater<string>());
		sort(B, B+n);
		bool dec = true, inc = true;
		for(i = 0; i < n; i++){
			if(A[i] != B[i]) inc = false;
			if(A[i] != C[i]) dec = false;
		}
		if(dec) 	cout << "DECREASING\n";
		else if(inc)cout << "INCREASING\n";
		else 		cout << "NEITHER\n";
	}
	
}
