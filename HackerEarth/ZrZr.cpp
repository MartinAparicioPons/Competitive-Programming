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
const static int MAXN = 300;


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll t, n, i, P[MAXN], r;
	P[0] = 1;
	for(i = 1; i < MAXN; i++){
		P[i] = P[i-1] * 5;
	}
	cin >> t;
	while(t--){
		cin >> n;
		r = 0;
		for(i = 1; P[i] <= n; i++){
			r += n / P[i];
		}
		cout << r << endl;
	}
}
