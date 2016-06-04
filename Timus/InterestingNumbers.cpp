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
const static ll MX = 30000010, MN = 1000000000010ll;

ll P[MX], A[MX], cp;
bool C[MX];

void sieve(){
	cp = 0;
	fill(C, C+MX, false);
	for(int i = 2; i < MX; i++) if(!C[i]) {
		P[cp++] = i;
		for(int j = i+i; j < MX; j+=i) C[j] = true;
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	sieve();
	int i, j, m;
	ll k, l, r;
	m = 0;
	for(i = 0; i < cp; i++){
		k = 1; l = 0;
		for(j = 1; j < cp && k < MN; j++){
			for(; l < P[j]-1 && k < MN; l++) k = k * P[i];
			if(k < MN) A[m++] = k;
		}
	}
	sort(A, A+m);
	while(cin >> l >> r){
		cout << 1 + r - l 
			- (upper_bound(A, A+m, r) - A) + (lower_bound(A, A+m, l) - A)  << endl;
	}
}

