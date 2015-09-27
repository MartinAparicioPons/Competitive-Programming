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
typedef long long ll;       	typedef pair<int, int> ii;
typedef pair<int, ii> iii;    	typedef vector<int> vi;
typedef vector<ii> vii;     	typedef vector<vi> vvi;
typedef vector<ll> vll;       	typedef pair<string, string> ss;
const static int MAXN = 6000, PR = 257;

string S[MAXN];
ll H[MAXN], n;
map<ll, ll> M;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int q, i, j;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> S[i];
	}
	sort(S, S+n);
	for(i = 0; i < n; i++){
		H[i] = 0;
		ll p = 1, v = 0;
		for(char c : S[i]){
			v += c - 'A' + 1;
			H[i] += p * c;
			p *= PR;
		}
		M[H[i]] = v*(i+1);
	}
	cin >> q;
	string Z;
	while(q--){
		cin >> Z;
		ll h = 0, p = 1;
		for(char c : Z) h += c*p, p *= PR;
		cout << M[h] << endl;
	}
}
