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
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 1000010;


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, i;
	int A[MX], s;
	cin >> n;
	for(i = 0; i < n; i++) cin >> A[i];
	for(i = s = 0; i < n; i++) s += A[i];
	sort(A, A+n, greater<int>());
	if(A[0]*100 >= 45 * s){
		cout << 1 << endl;
		return 0;
	}
	if(A[0]*100 >= 40 * s){
		if(100*(A[0] - A[1]) <= 10*s) {
			cout << 2 << endl;
		} else {
			cout << 1 << endl;
		}
		return 0;
	}
	cout << 2 << endl;
}



