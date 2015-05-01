#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
 
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 1000;

int val(string s){
	int r = 0;
	for(auto i : s){
		r += i - 'A' + 1;
	}
	return r;
}

int main(){
	ios_base::sync_with_stdio(0);
	vector<string> V;
	string s;
	while(cin >> s){
		V.push_back(s);
	}
	sort(V.begin(), V.end());
	int i; ull r = 0ll;
	for(i = 0; i < V.size(); i++){
		if(V[i] == "COLIN"){ DEB(i+1); DEB(val(V[i]));}
		r += (i+1ll)*val(V[i]);
	}
	cout << r << endl;
}
