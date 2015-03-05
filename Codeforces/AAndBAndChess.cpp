#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 100010;


int main(){
	ios_base::sync_with_stdio(0);
	map<char, int> M;
	int i, w, b, j;
	M['q'] = 9;
	M['r'] = 5;
	M['b'] = 3;
	M['n'] = 3;
	M['p'] = 1;
	string s;
	w = b = 0;
	for(i = 0; i < 8; i++){
		cin >> s;
		for(j = 0; j < s.size(); j++){
			if(s[j] != 'k' && s[j] != 'K' && s[j] != '.'){
				if(s[j] < 'a'){
					w += M[s[j] + 32];
				} else {
					b += M[s[j]];
				}
			}
		}
	}
	if(w > b) cout << "White";
	else if(b > w) cout << "Black";
	else 	cout << "Draw";
	cout << endl;
}
