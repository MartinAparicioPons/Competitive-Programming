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

using namespace std; 		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 555;


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, i, j, A[MX];
	while(cin >> n){
		if(n == -1) break;
		for(i = 1; i <= n; i++) cin >> A[i];
		bool mov, ok = false;
		while(!ok) {
			mov = false;
			for(i = 1; i <= n; i++){
				if(A[i] == i){
					mov = true;
					A[i] = 0;
					for(j = i-1; j >= 1; j--) A[j]++;
					break;
				}
			}
			if(!mov) ok = true;
		}
		ok = true;
		for(i = 1; i <= n; i++) if(A[i]) ok = false;
		if(!ok) cout << "N\n";
		else cout << "S\n";
	}
}


