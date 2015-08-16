#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define EB emplace_back

using namespace std;
typedef unsigned long long ull; 
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef pair<string, string> ss;
const static int MAXN = 110;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string S;
	char c;
	while(getline(cin, S), S[0] != '*'){
		istringstream iss(S);
		c = tolower(S[0]);
		bool ok = true;
		while(iss >> S){
			if(c != tolower(S[0])) ok = false;
		}
		if(ok) PR("Y");
		else   PR("N");
	}
}
