#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
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
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 10000000;

int DP[55];
bool C[MAXN];
vi P;

void sieve(){
	memset(C, 0, sizeof C);
	P.push_back(2);
	for(int i = 3; i < MAXN; i+=2) if(!C[i]){
		P.push_back(i);
		for(int j = i+i; j < MAXN; j+=i){
			C[j] = true;
		}
	}
}

int dp(int i, int n){
	if(i > n) return 0;
	if(i == n) return 1;
	if(DP[i] == -1) DP[i] = dp(i+1, n) + dp(i+4, n);
	return DP[i];
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, t, i;
	sieve();
	cin >> t;
	while(t--){
		cin >> n;
		memset(DP, -1, sizeof DP);
		cout << distance(P.begin(), upper_bound(P.begin(), P.end(), dp(0, n))) << endl;
	}
	
}



