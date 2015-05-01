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
	set<int> T;
	string s;
	int r = 0;
	for(int i = 1, j = 0; i < MAXN; i++){
		j += i;
		T.insert(j);
	}
	while(cin >> s){
		if(T.find(val(s)) != T.end()){
			r++;
		}
	}
	cout << r << endl;
}
