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
const static int MX = 555;


int main() {
	string S[MX], Z[MX], L;
	while(getline(cin, L)){
		stringstream SS;
		SS << L;
		int a = 0, b, i, j;
		while(SS >> S[a]) a++;
		getline(cin, L);
		stringstream SS2;
		SS2 << L;
		b = 0;
		while(SS2 >> Z[b]) b++;
		if(!a || !b) continue;
		if(a != b) goto NO;
		for(i = 0; i < a; i++){
			if(S[i][0] != Z[i][0]) goto NO;
		}
		cout << "yes\n";
		continue;
		NO: cout << "no\n";
	}
}
