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
const static ll MX = 100010, MF = 1000010;

ll A[MX], n;
set<ll> S[MF];

ll dec(set<ll>::iterator r, set<ll> &S, ll a){
	if(r == S.begin()) 
		return *(--S.end()) == a ? n : (a - (*(--S.end())) + n) % n;
	r--;
	return (a - (*r) + n) % n;
}

ll add(set<ll>::iterator r, set<ll> &S, ll a){
	if(S.size() == 1) return n;
	r++;
	if(r == S.end()) return (*S.begin() - a + n)%n;
	return (*r - a) % n;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll f, a, b, c, m;
	int i;
	cin >> n >> f >> a >> b >> c;
	A[1] = a;
	S[a].insert(1);
	for(i = 2; i <= n; i++){
		A[i] = (b * A[i-1] + c) % f;
		S[A[i]].insert(i);
	}
	cin >> m;
	while(m--){
		cin >> a >> b;
		S[A[a]].erase(a);
		S[b].insert(a);
		A[a] = b;
		auto it = S[b].find(a);
		cout << dec(it, S[b], a) << " " << add(it, S[b], a) << endl;
	}
}



