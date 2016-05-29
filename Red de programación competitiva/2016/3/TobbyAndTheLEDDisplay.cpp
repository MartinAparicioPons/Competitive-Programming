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
const static int MX = 55000;


int main() {
	char d;
	ll n, t, i, j;
	while(cin >> n >> t >> d){
		string S[3];
		char Z[MX];
		t = t % n;
		if(d == 'L') t *= -1;
		getline(cin, S[0]);
		getline(cin, S[0]);
		getline(cin, S[1]);
		getline(cin, S[2]);
		DB(S[0]);
		DB(S[1]);
		DBL(S[2]);
		for(i = 1; i < S[1].size(); i+=2){
			Z[(i/2 + t + n) % n] = S[1][i];
		}
		cout << S[0] << "\n|";
		for(i = 0; i < n; i++){
			cout << Z[i] <<'|';
		}
		cout << "\n" << S[2] << endl;
	}
}
