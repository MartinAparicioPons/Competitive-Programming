#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define MP make_pair

using namespace std;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 1100000;

ll a, b;

double s(int c){
	if((2.0 * (c/(2*b))) == 0 || c / (2.0 * (c/(2*b))) < 0) return 1e200;
	return c / (2.0 * (c/(2*b)));
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	
	cin >> a >> b;
	if(a < b) {cout << "-1\n"; return 0;}
	if(a == b) {cout << a << endl; return 0;}
	double x = s(a+b);
	if(x > 1e195) cout << -1 << endl;
	else printf("%.12lf\n", x);
}


