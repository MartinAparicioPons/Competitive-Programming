#include <bits/stdc++.h>
#define EPS 1e-11
#define LB 1e11
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((x) & (1<<(m)))
#define SB(m, x) ((m) |= (1<<(x)))
#define CB(m, x) ((m) &= ~(1<<(x)))
#define TB(m, x) ((m) ^= (1<<(x)))

using namespace std; typedef string string;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MX = 101001;

ll N[MX], n;
bool V[MX];

int main() {
	string S;
	ll i, j, a;
	cin >> n >> S;
	for(i = 0; i < n; i++){
		cin >> a;
		if(S[i] == '<') a *= -1;
		N[i] = i + a;
	}
	memset(V, 0, sizeof V);
	bool ok = false;
	i = 0;
	while(!V[i]){
		V[i] = true;
		if(N[i] < 0 || N[i] >= n) {
			ok = true;
			break;
		}
		i = N[i];
	}
	if(!ok) cout << "IN"; // Just because I CAN
	cout << "FINITE\n";
}
