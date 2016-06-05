#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
	#define endl "\n"
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
const static ll MX = 600010;

string preprocess(string &S){
	if(S == "") return "^$";
	string T = "^";
	for(int i = 0; i < S.size(); i++){
		T.push_back('#');
		T.push_back(S[i]);
	}
	return T + "#$";
}

bool isValid(char c){
	return c != '#' && c != '^' && c != '$';
}

int P[MX], A[MX], F[MX];

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	string T;
	while(cin >> T){
		T = preprocess(T);
		memset(A, 0, sizeof A);
		memset(F, 0, sizeof F);
		memset(P, 0, sizeof P);
		int n = T.size(), c, r, i, j;
		c = r = 0;
		for(i = 1; i < n-1; i++){
			if(r > i) P[i] = min(r-i, P[2*c - i]);
			else 	  P[i] = 0;
			while(T[i - P[i] - 1] == T[i + P[i] + 1]) P[i]++;
			if(r < i + P[i]){
				c = i; 
				r = i + P[i];
			}
		}
		multiset<int> S;
		for(i = 0; i <= n; i++){
			S.insert(i + P[i] - 1);
			auto it = S.begin();
			while(S.size() && *it < i) {
				S.erase(it);
				it = S.begin();
			}
			F[i] = S.size();
		}
		
		multiset<int, greater<int> > Z;
		for(i = n; i >= 0; i--){
			Z.insert(i - P[i] + 1);
			auto it = Z.begin();
			while(Z.size() && *it > i){
				Z.erase(it);
				it = Z.begin();
			}
			A[i] = Z.size();
		}
		//~ cerr << "A[] = ";
		//~ for(i = 0; i < n; i++) cerr << A[i] << " "; EL;
		//~ cerr << "F[] = ";
		//~ for(i = 0; i < n; i++) cerr << F[i] << " "; EL;
		
		ll res = 0;
		for(i = 2; i+2 <= n; i+=2){
			//~ DB(F[i]); DBL(A[i+2]);
			res += 1ll * F[i] * A[i+2];
		}
		cout << res << endl;
	}
}

