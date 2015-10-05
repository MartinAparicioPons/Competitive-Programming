#include <bits/stdc++.h>
#ifdef DEBUG
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define EL cerr << endl;
#else
#define DB(x)
#define DEB(x)
#define EL
#endif

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
typedef vector<ll> vll;       typedef vector<string> vs;
typedef string string; 		  typedef set<int> si;
const static int MAXN = 501000, PR = 29;

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int A[30] = {0}, B[30] = {0};
	int i, j, n, m;
	string S, Z;
	cin >> i;
	while(cin >> S >> Z){
		memset(A, 0, sizeof A);
		memset(B, 0, sizeof B);
		n = S.size();
		m = Z.size();
		for(i = 0; i < n; i++) A[S[i] - 'a']++;
		for(i = 0; i < m; i++) B[Z[i] - 'a']++;
		int r = 0;
		for(i = 0; i < 30; i++){
			r += A[i] && B[i];
		}
		cout << (r?"YES":"NO") << endl;
	}
	return 0;
}
