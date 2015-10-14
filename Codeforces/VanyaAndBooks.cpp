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
const static int MAXN = 10000000;

int A[MAXN];

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	ll n, a, b, c, d, e;
	int i, j, k;
	cin >> n;
	a = n; k = 0;
	while(a){
		k++;
		a /= 10;
	}
	a = 0; d = 1ll;
	for(i = 1; i <= k; i++){
		a += (min(n, d*10ll - 1) - (d-1))*i;
		DB((min(n, d*10ll - 1) - (d-1))*i); DB(min(n, d*10ll - 1)); DB(d); DBL(i);
		d *= 10ll;
	}
	cout << a << endl;
}
