#include <bits/stdc++.h>
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
const static ll MX = 555, INF = LLONG_MAX;

ll n, A[MX], s;


int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i;
	while(cin >> n, n > 0){
		for(i = 0; i < n-1; i++) cin >> A[i];
		sort(A, A+n-1);
		s = 0;
		for(i = 0; i < n-1; i++) s += A[i];
		ll median;
		set<ll> R;
		A[n-1] = INF;
		for(i = 0; i < n; i++) {
			if(i < n/2){
				median = A[n/2 - 1];
				if(n * median - s < A[i] && (i == 0 || n * median - s > A[i-1])) {
					R.insert(n * median - s);
				}
			} else if(i == n/2) {
				if(s % (n-1) == 0 && A[i-1] < s / (n-1) && A[i] > s / (n-1)){
					R.insert(s/(n-1));
				}
			} else {
				median = A[n/2];
				if(n * median - s > A[i-1] && n * median - s < A[i]) {
					R.insert(n * median - s);
				}
			}
		}
		cout << R.size() << endl;
	}
}

