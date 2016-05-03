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
const static int MAXN = 50050;

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int x, y, a, b, c, d;
	cin>>x>>y>>a>>b>>c>>d;
	
	if((a+c <= x && b <= y && d <= y) || (a+c <= y && b <= x && d <= x))
		return cout << "YES\n", 0;
	swap(a, b);
	if((a+c <= x && b <= y && d <= y) || (a+c <= y && b <= x && d <= x))
		return cout << "YES\n", 0;
	swap(c, d);
	if((a+c <= x && b <= y && d <= y) || (a+c <= y && b <= x && d <= x))
		return cout << "YES\n", 0;
	swap(a, b);
	if((a+c <= x && b <= y && d <= y) || (a+c <= y && b <= x && d <= x))
		return cout << "YES\n", 0;
	cout << "NO\n";
	
	
}
