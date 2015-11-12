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

#define EPS 1e-10
#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define hash losredondos

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef set<int> si;
typedef set<ll> sll; 		typedef set<string> ss;
const static int MAXN = 10010;

int main() {
	ll n, i, a;
	while(cin >> n, n != -1){
		vll D;
		a = 0;
		for(i = 1; i < n; i++) if(n%i == 0) D.PB(i), a += i;
		if(a == n){
			cout << n << " = ";
			for(i = 0; i < D.size(); i++){
				if(i) cout << " + ";
				cout << D[i];
			}
			cout << endl;
		} else {
			cout << n << " is NOT perfect.\n";
		}
	}
}
