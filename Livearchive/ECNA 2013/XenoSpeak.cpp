#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXL = 64;

ull L[MAXL];

void prep(){
	int i; L[0] = 0; L[1] = 1;
	for(i = 2; i < MAXL; i++) L[i] = 2*L[i-1] + ((i%2)?-1:1);
}

ull sum(int j){
	ull x = 0ll;
	for(int i = 0; i < j; i++) x += L[i];
	return x;
}

int rsq(ull x){
	ull y = 0ll; x++;
	for(int i = 1; i < MAXL; i++){
		y += L[i];
		if(y >= x) return i;
	}
	return 0;
}

string dp(ull a, ull l){
	if(l <= 0ll) return "";
	if(a < (1ll<<(l-1))){
		string s = "";
		for(int i = 0; i < l; i++){
			s += (a%2)?'b':'a';
			a /= 2;
		} 
		return string(s.rbegin(), s.rend());
	}
	return "bb" + dp(a - (1ll<<(l-1)), l-2);
}

int main(){
	ios_base::sync_with_stdio(0);
	prep();
	ull n, m, a, b, k, h, tc = 1;
	while(cin >> n >> m, n || m){
		m--; a = n*m; b = n*m + n - 1;
		cout << "Case " << tc++ << ": ";
		k = rsq(a); h = rsq(b);
		cout << dp(a - sum(k), k) << " ";
		cout << dp(b - sum(h), h) << endl;
	}
}
