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
typedef vector<ll> vll;       typedef vector<string> vs;
const static int MAXN = 100000000, MX = 13;

ll F[MX+5];
int C[MX];

ll anagrams(){
	int t = 0;
	ll d = 1ll;
	for(int i = 0; i < MX; i++){
		t += C[i];
		d *= F[C[i]];
		DB(d);DB(t);DB(C[i])EL;
	}
	//DB(t);DB(d);
	return F[t] / d;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j, t, n;
	ll k;
	for(i = F[0] = 1; i < MX+5; i++) F[i] = F[i-1]*i;
	cin >> t;
	while(t--){
		cin >> k;
		for(i = 0; i < MX; i++) C[i] = 1;
		for(i = 0; i < MX; i++) {
			for(j = 0; j < MX; j++) if(C[j]) {
				C[j]--;
				ll a = anagrams();
				if(a >= k){
					cout << (char)('a' + j);
					break;
				}
				k -= a;
				C[j]++;
			}
		}
		cout << endl;
	}
}



