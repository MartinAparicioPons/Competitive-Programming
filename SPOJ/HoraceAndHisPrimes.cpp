#include <bits/stdc++.h>
#define EPS 1e-11
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
#else
	#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
	#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
	#define EL cerr << endl;
#endif
#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) | (1<<(x)))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))

using namespace std; 		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<int, int> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 1000010;

int P[MX], DP[MX], RSQ[13][MX] = {0};

void sieve(){
	int i, j;
	P[0] = 0; 
	P[1] = 1; 
	P[2] = 2;
	for(i = 3; i < MX; i+=2) P[i] = i;
	for(i = 4; i < MX; i+=2) P[i] = 2;
	for(i = 3; i < MX; i+=2) if(P[i] == i) {
		for(j = i+i; j < MX; j+=i) P[j] = i;
	}
}

int dp(int x){
	if(DP[x] == -1){
		if(P[x] != x) {
			int r = 0, y = x, p = -1;
			while(y != 1){
				if(p != P[y]) r += P[y];
				p = P[y];
				y /= P[y];
			}
			DP[x] = 1 + dp(r);
		} else DP[x] = 1;
	}
	return DP[x];
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	sieve();
	int t, a, b, i, j, k;
	memset(DP, -1, sizeof DP);
	memset(RSQ, 0, sizeof RSQ);
	for(i = 2; i < MX; i++) dp(i);
	for(i = 2; i < MX; i++){
		for(j = 1; j <= 12; j++){
			RSQ[j][i] = RSQ[j][i-1] + (dp(i) == j);
		}
	}
	cin >> t;
	while(t--){
		cin >> a >> b >> k;
		if(k > 12) cout << 0 << endl;
		else cout << RSQ[k][b] - RSQ[k][a-1] << endl;
	}
}



