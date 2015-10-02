#include <bits/stdc++.h>
#ifdef DEBUG
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define EL cerr << endl;
#else
#define DB(x)
#define DEB(x)
#define EL
#endif

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
typedef string string;
const static int MAXN = 501000, PR = 29;

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int i, C[256] = {0};
	string S;
	cin >> S;
	for(i = 0; i < S.size(); i++){
		C[S[i]]++;
	}
	int d = 0;
	for(i = 0; i < 256; i++){
		if(C[i] % 2) d++;
	}
	if((d == 0 && S.size()%2 == 0) || (S.size()%2 == 1 && d == 1)) cout << "YES\n";
	else 	  cout << "NO\n";
	return 0;
}
