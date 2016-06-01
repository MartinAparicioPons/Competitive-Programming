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
const static ll MX = 100010;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, i, j, x, A[MX], B[MX];
	while(cin >> n){ 
		for(i = 0; i < n; i++) cin >> A[i];
		for(i = 0; i < n; i++) cin >> B[i];
		sort(A, A+n, greater<int> ());
		sort(B, B+n, greater<int> ());
		j = 0;
		for(i = 0; i+j < n;){
			if(A[i+j] >= B[i]) j++;
			else i++;
		}
		cout << n-j << endl;
	}
}



