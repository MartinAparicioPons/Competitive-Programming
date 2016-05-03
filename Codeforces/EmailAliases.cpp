#include <bits/stdc++.h>
#ifdef DEBUG
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define EL cerr << endl;
#else
#define DB(x)
#define DBL(x)
#define EL
#endif

#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define hash sdkjfhwieuhoqihfqwekjfhqpqwe

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef set<int> si;
typedef set<ll> sll; 		typedef set<string> ss;
const static int MAXN = 500050;

map<string, vector<string> > I;

bool isBmail(string &S){
	int i = 0;
	while(S[i] != '@') i++;
	string K;
	while(i < S.size()) K.PB(tolower(S[i++]));
	return K == "@bmail.com";
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, i, j;
	cin >> n;
	string S, Z;
	for(i = 0; i < n; i++){
		cin >> S;
		DB(S);
		Z = "";
		bool kas = true;
		if(isBmail(S)){
			for(j = 0; j < S.size(); j++){
				if(S[j] == '@') kas = false;
				if(S[j] == '+'){
					while(j < S.size() && S[j] != '@') j++;
					kas = false;
				}
				if(kas && S[j] == '.') continue;
				Z.PB(tolower(S[j]));
			}
		} else {
			for(j = 0; j < S.size(); j++){
				Z.PB(tolower(S[j]));
			}
		}
		DB(Z);
		I[Z].PB(S);
	}
	cout << I.size() << endl;
	for(auto &X : I){
		cout << X.Y.size() << " ";
		bool f = true;
		for(auto &L : X.Y){
			if(f) f = false; else cout << " ";
			cout << L;
		}
		cout << endl;
	}
}
