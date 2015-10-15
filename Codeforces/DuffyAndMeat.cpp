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

int main() {
	int n, a, b, i, A[MAXN], P[MAXN], M[MAXN];
	cin >> n;
	for(i = 0; i < n; i++) M[i] = INT_MAX;
	for(i = 0; i < n; i++) cin >> A[i] >> P[i];
	M[0] = P[0];
	for(i = 1; i < n; i++){
		M[i] = min(M[i-1], P[i]);
	}
	ll r = 0;
	for(i = 0; i < n; i++){
		r += A[i] * M[i];
	}
	cout << r << endl;
}
