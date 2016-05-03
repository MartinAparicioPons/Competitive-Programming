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
const static int MAXN = 1020;

int D[11];

int count(int a, int d){
	if(a < 1) return 0;
	int c = 0, p = 1, r = 0, l = a, res = 0;
	while(l > 0){
		c = l % 10;
		if(c == d) res += r+1;
		else if(c > d) res += p;
		l /= 10;
		res += l * p;
		p *= 10;
		r = a % p;
	}
	if(d == 0) res -= p/9;
	return res;
}

int main() {
	int a, b, d;
	while(cin >> a >> b, a || b){
		memset(D, 0, sizeof D);
		for(d = 0; d <= 9; d++) D[d]  = count(b, d);
		for(d = 0; d <= 9; d++) D[d] -= count(a-1, d);
		for(d = 0; d <= 9; d++) cout << D[d] << " \n"[d==9];
	}
}
