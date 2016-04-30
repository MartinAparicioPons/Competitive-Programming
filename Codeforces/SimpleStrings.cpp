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


int main() {
	string S;
	int i;
	while(cin >> S){
		for(i = 0; 1+i < S.size(); i++){
			if(S[i] != S[i+1]) continue;
			char c = (S[i+1]+1 - 'a')%(1+'z'-'a') + 'a';
			if(2+i < S.size() && S[i+2] == c) c = (S[i+2]+1 - 'a')%(1+'z'-'a') + 'a';
			S[i+1] = c;
		}
		cout << S << endl;
	}
}
