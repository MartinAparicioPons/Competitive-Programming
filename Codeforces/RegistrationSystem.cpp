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
const static int MAXN = 100050, PR = 31;

map<ll, int> V;
pair<string, int> SS[MAXN];

ll H(string &S){
	ll p = 1, h = 0;
	for(char c : S){
		h += (c - 'a' + 1) * p;
		p *= PR;
	}
	return h;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, i = 0, a, b, c;
	string S;
	cin >> n;
	while(n--){
		cin >> S;
		ll h = H(S);
		if(V.count(h)){
			cout << SS[V[h]].X << SS[V[h]].Y++ << "\n";
		} else {
			cout << "OK\n";
			SS[i] = {S, 1};
			V[h] = i++;
		}
	}
}
