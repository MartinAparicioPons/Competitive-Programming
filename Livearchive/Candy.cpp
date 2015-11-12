#include <bits/stdc++.h>
#ifdef DEBUG
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define EL cerr << endl;
#else
#define DB(x)
#define DBL(x)
#define EL
#endif

#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define hash sdkjfhwieuhoqihfqwekjfhqpqwe

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef set<int> si;
typedef set<ll> sll; 		typedef set<string> ss;
const static int MAXN = 100010;

int R[MAXN], n, m, DP[MAXN];
vector<int> M[MAXN];

int rowSum(int r, int c){
	if(c >= m) return 0;
	if(DP[c] == -1) DP[c] = max(rowSum(r, c+1), rowSum(r, c+2) + M[r][c]);
	return DP[c];
}

int sum(int r){
	if(r >= n) return 0;
	if(DP[r] == -1) DP[r] = max(sum(r+1), sum(r+2) + R[r]);
	return DP[r];
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j, a;
	while(cin >> n >> m, n || m) {
		memset(R, 0, sizeof R);
		for(i = 0; i < n; i++) {
			M[i].clear();
			for(j = 0; j < m; j++){
				cin >> a;
				M[i].PB(a);
			}
		}
		for(i = 0; i < n; i++){
			memset(DP, -1, sizeof DP);
			R[i] = rowSum(i, 0);
		}
		memset(DP, -1, sizeof DP);
		cout << sum(0) << endl;
	}
}
