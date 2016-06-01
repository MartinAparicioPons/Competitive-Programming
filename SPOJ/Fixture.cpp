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
	int i, j, n;
	string S[123];
	while(cin >> n, n != -1){
		for(i = 2; i <= n; i++) cin >> S[i];
		S[1] = "";
		bool ok = false;
		while(!ok){
			bool m = false;
			for(i = 2; i <= n; i++) if(S[i].size()){
				m = true;
				if(S[i][0] == '1'){
					S[i].erase(S[i].begin());
					S[1].PB(i+'0');
					break;
				} else if (S[S[i][0]-'0'].size() 
						   && i + '0' == S[S[i][0]-'0'][0]){
					S[S[i][0]-'0'].erase(S[S[i][0]-'0'].begin());
					S[i].erase(S[i].begin());
					break;
				} else {
					//~ DB(i);DBL(S[i]);
				}
			}
			if(!m) ok = true;
		}
		cout << S[1] << endl;
	}
}


