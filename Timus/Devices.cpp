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
const static ll MX = 54322, MN = 780;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	string A, B;
	int p, i, j;
	map<string, set<int>> M;
	while(cin >> A >> B >> p){
		M[B].insert(p);
	}
	int m, mm;
	m = 0;
	mm = INT_MAX;
	for(auto x : M){
		if(x.Y.size() > m || (x.Y.size() == m && *x.Y.begin() < mm)) {
			m = x.Y.size(); 
			mm = *x.Y.begin();
			A = x.X;
		}
	}
	cout << A << endl;
}

