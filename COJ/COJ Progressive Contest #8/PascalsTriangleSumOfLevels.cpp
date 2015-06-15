#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
const static int MAXN = 1010, MOD = 1000007;

int V[MAXN], P[MAXN+10][MAXN+10], a, b;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, p, j;
	for(i = 0, p = 1; i < MAXN; i++){
		V[i] = p % MOD; p = (p + p)%MOD;
	}
	for(i = 1; i <= MAXN; i++){
		for(j = i; j <= MAXN; j++){
			P[i][j] = (P[i][j-1] + V[j-1])%MOD;
		}
	}
	while(cin >> a >> b, a >= 0 && b >= 0){
		cout << P[a+1][b+1] << "\n";
	}
}
