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
#define all(x) x.begin(), x.end()
#define hash sdkjfhwieuhoqihfqwekjfhqpqwe

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef set<int> si;
typedef set<ll> sll; 		typedef set<string> ss;
const static int MAXN = 100010;

static const int N = 100000000, LOGN = 15;
int lp[N+1], pr[N/LOGN], cp; 
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
	ios_base::sync_with_stdio(0); cin.tie(0);
	magicSieve();
	int n, i, j;
	while(cin >> n){
		if(n < 5) cout << n << " is not the sum of two primes!\n";
		else if(n % 2){
			if(binary_search(pr, pr+cp, n-2)) {
				cout << n << " is the sum of 2 and " << n-2 << ".\n";
			} else {
				cout << n << " is not the sum of two primes!\n";
			}
		} else {
			bool ok = false;
			for(i = n/2; i > 0;i--){
				if(i != n-i && binary_search(pr, pr+cp, i) && binary_search(pr, pr+cp, n-i)){
					cout << n << " is the sum of " << min(i, n-i) << " and " << max(i, n-i) << ".\n";
					ok = true;
					break;
				}
			}
			if(!ok)	cout << n << " is not the sum of two primes!\n";
		}
	}
}
