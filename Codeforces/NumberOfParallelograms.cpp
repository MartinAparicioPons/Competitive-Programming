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
const static int MX = 4000;

ii center(ii a, ii b){
	return {min(a.X, b.X) + abs(a.X - b.X)/2, min(a.Y, b.Y) + abs(a.Y - b.Y)/2};
}

int main() {
	int i, j, n;
	ii A[MX];
	map<ii, int> P;
	cin >> n;
	for(i = 0; i < n; i++) cin >> A[i].X >> A[i].Y;
	for(i = 0; i < n; i++){
		A[i].X*=2;
		A[i].Y*=2;
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < i; j++){
			P[center(A[i], A[j])]++;
		}
	}
	
	ll r = 0;
	for(pair<const ii, int> &a : P){
		r += (a.Y * (a.Y-1)) / 2;
	}
	cout << r << endl;
}
