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
const static int MX = 500100;

int n, k, RSQ[MX] = {0};

int query(int i, int j){
	return RSQ[j+1] - RSQ[i];
}


int main() {
	int i, j, a, t, l, r, m, mm, mi, A[MX];
	cin >> n >> k;
	for(i = 0; i < n; i++){
		cin >> m; 
		A[i] = m;
		m^=1;
		RSQ[i+1] = RSQ[i] + m;
	}
	l = 0, r = n+1; mi = 0;
	while(l < r){
		m = (l + r + 1) / 2;
		bool fits = false;
		for(i = 0; i + m -1 < n; i++){
			if(k >= query(i, i+m-1)){
				mi = i;
				fits = true; break;
			}
		}
		if(fits) l = m;
		else r = m - 1;
	}
	cout << l << endl;
	
	for(i = 0; i < n; i++) {
		if(i < mi || i >= mi+l) cout << A[i] << " ";
		else  cout << "1 ";
	}
	cout << endl;
}
