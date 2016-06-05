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

using namespace std;		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 1010;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, A[MX], i, j, r = 0;
	cin >> n;
	for(i = 0; i < n; i++) cin >> A[i];
	for(i = 0; i < n; i++){
		if(A[i] % 2){ 
			if(i+1 < n && A[i+1] % 2) {
				A[i]++; A[i+1]++;
				r++;
			} else if(i+1 == n){
				A[i]++; A[i-1]++;
				r++;
			} else if(i > 0 && A[i-1] % 2){
				A[i]++; A[i-1]++;
				r++;
			} else {
				A[i]++; A[i+1]++;
				r++;
			}
		}
	}
	for(i = 0; i < n; i++){
		if(A[i] % 2) r = -1;
	}
	if(r >= 0) cout << 2*r << endl;
	else cout << "NO\n";
}

