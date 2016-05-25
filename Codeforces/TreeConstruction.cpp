#include <bits/stdc++.h>
#define EPS 1e-11
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) |= (1<<(x)))
#define CB(m, x) ((m) &= ~(1<<(x)))
#define TB(m, x) ((m) ^= (1<<(x)))

using namespace std; typedef string string;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MX = 100010;

int main() {
	int n, i, j, a, A[MX], P[MX] = {-1};
	set<int, greater<int>> G;
	set<int> L;
	map<int, int> M;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> a;
		A[i] = a;
		M[A[i]] = i;
		auto git = G.lower_bound(a);
		auto lit = L.lower_bound(a);
		if(!(git == G.end() && lit == L.end())){
			
			if(git == G.end()){
				P[i] = *lit;
			} else if(lit == L.end()){
				P[i] = *git;
			} else {
				if(M[*git] > M[*lit]) P[i] = *git;
				else P[i] = *lit;
			}
		}
		G.insert(a);
		L.insert(a);
	}
	for(i = 1; i < n; i++) cout << P[i] << " \n"[i+1==n];
}
