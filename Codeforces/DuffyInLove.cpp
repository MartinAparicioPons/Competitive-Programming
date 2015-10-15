#include <bits/stdc++.h>
#ifdef DEBUG
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define EL cerr << endl;
#else
#define DB(x)
#define DBL(x)
#define EL
#endif

#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define all(xx) xx.begin(), xx.end()
#define hash sdkjfhwieuhoqihfqwekjfhqpqwe

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef set<int> si;
const static int MAXN = 500004;

static const int N = 10000000, LOGN = 20;
ll lp[N+1], pr[N/LOGN], cp; 
void magicSieve(){
	cp = 0;
	for (int i=2; i<=N; ++i) {
		if (lp[i] == 0) {
			lp[i] = i;
			pr[cp++] = i;
		}
		
		for (int j=0; j<cp && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
			lp[i*pr[j]] = pr[j];
	}
}

int main() {
	ll n, k;
	magicSieve();
	cin >> n;
	set<ll> P;
	k = n;
	if(binary_search(pr, pr+cp, n)) return cout << n << endl, 0;
	for(int i = 0; i < cp && pr[i] <= k; i++){
		while(k % pr[i] == 0){
			P.insert(pr[i]);
			k /= pr[i];
		}
	}
	ll p = 1;
	if(k > 1) p *= k;
	for(auto x : P) p *= x;
	cout << p << endl;
}
