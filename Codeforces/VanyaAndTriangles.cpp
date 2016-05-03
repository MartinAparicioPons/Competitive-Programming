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
const static int MAXN = 5000;

typedef pair<ll, ll> point; // int coords
typedef pair<point , point> line; //m and b are fractions.

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

point make(ll a, ll b){
	ll g = gcd(a, b);	
	return MP(a / g, b / g);
}

line getLine(point a, point b){
	line x;
	if(a.X == b.X) return MP(make(LLONG_MAX, 1), make(a.X, 1));
	x.X = make(a.Y - b.Y, a.X - b.X);
	x.Y = make(- b.X * (a.Y - b.Y) + b.Y * (a.X - b.X), a.X - b.X);
	return x;
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	ll n, a, b, c, d, e;
	map<line, int> C;
	vector<point> V;
	cin >> n;
	ll T[MAXN], Tr[MAXN]; T[0] = 0; Tr[0] = 0;
	for(int i = 1; i < MAXN; i++){
		Tr[i] = Tr[i-1] + i;
		T[i] = T[i-1] + i;
	}
	for(int i = 1; i < MAXN; i++){
		T[i] += T[i-1];
	}
	for(int i = 0; i < n; i++) {
		cin >> a >> b;
		V.PB(MP(a, b));
	}
	if(n < 3) return cout<<0, 0;
	int i, j;
	for(i = 0; i < n; i++){
		for(j = i+1; j < n; j++){
			C[getLine(V[i], V[j])]++; 
		}
	}
	
	ll l; a = T[n-2];
	for(auto &x : C){
		l = 0;
		if(binary_search(Tr, Tr+n, x.Y)) l++;
		l += lower_bound(Tr, Tr+n, x.Y) - Tr;
		if(l > 2){
			a -= T[l - 2];
		}
	}
	cout << a << endl;
}/*

5
0 0 1 1 2 2 3 3
0 3
 
*/

