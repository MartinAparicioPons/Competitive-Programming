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
const static int MAXN = 110;

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	ll n, l, k, A[MAXN] = {0}, P[MAXN] = {1};
	cin >> k >> n;
	l = 1; int it = 0;
	while(l <= 2*n){
		P[it++] = l;
		l *= k;
	}
	P[it++] = l;
	l = n;
	for(int i = it-1; i >= 0; i--) {
		while(P[i] <= l) {
			A[i]++;
			l -= P[i];
		}
	}
	for(int i = 0; i < it; i++){
		if(A[i] > 1){
			A[i+1]++;
			A[i] = A[i] - k;
		}
	}
	for(int i = 0; i < it+1; i++) {
		if(abs(A[i]) > 1) return cout << "NO\n", 0;
	}
	return cout << "YES\n", 0;
}
