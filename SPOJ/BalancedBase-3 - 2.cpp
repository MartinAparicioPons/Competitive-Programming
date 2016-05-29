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
const static ll MX = 2000;


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t, n, a, b, i, j, T[MX];
	char B[MX];
	cin >> t;
	while(t--){
		cin >> n;
		memset(T, 0, sizeof T);
		a = n; b = 0;
		while(a){
			T[b++] = a % 3;
			a /= 3;
		}
		for(i = 0; i < b; i++) {
			if(T[i] == 0) B[i] = '0';
			if(T[i] == 1) B[i] = '+';
			if(T[i] == 2){
				if(b == i+1) b++;
				T[i+1]++;
				B[i] = '-';
			}
			if(T[i] == 3){
				if(b == i+1) b++;
				T[i+1]++;
				B[i] = '0';
			}
		}
		B[b+1] = '\0';
		for(i = b-1; i >= 0; i--) cout << B[i];
		cout << endl;
	}
}
