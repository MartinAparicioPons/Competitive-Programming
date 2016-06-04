#include <iostream>
#include <cstring>
#include <vector>
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
#else
	#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
	#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
	#define EL cerr << endl;
#endif
#define EPS 1e-11
#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) | (1<<(x)))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 110;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, i, j, DP[MX][MX], M[MX][MX];
	cin >> n;
	for(i = 0; i < n; i++){
		for(j = 0; j <= i; j++){
			cin >> M[i][j];
		}
	}
	memset(DP, 0, sizeof DP);
	for(j = 0; j < n; j++) DP[n-1][j] = M[n-1][j];
	for(i = n-2; i >= 0; i--){
		for(j = 0; j <= i; j++){
			DP[i][j] = M[i][j] + max(DP[i+1][j], DP[i+1][j+1]);
		}
	}
	cout << DP[0][0] << endl;
}

