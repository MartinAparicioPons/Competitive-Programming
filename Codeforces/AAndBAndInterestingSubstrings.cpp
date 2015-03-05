#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 100010;

ll X[256];
map<ll, int> M[256];

int main(){
	ios_base::sync_with_stdio(0);
	int i;
	ll c, r;
	string S;
	for(i = 'a'; i <= 'z'; i++) cin >> X[i];
	cin >> S;
	for(i = 0, c = r = 0ll; i < S.size(); i++){
		if(M[S[i]].find(c) != M[S[i]].end()){
			r += M[S[i]][c];
		}
		c += X[S[i]];
		M[S[i]][c]++;
	}
	cout << r << endl;
}
