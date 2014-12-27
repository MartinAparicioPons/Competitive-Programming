#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long a, r, T, t;
	char c;
	bool ok;
	cin >> T;
	while(T--){
		cin >> r;
		ok = true;
		while(cin >> c){
			cin >> a;
			if(c == '='){
				t = a;
				break;
			}
			if(c == '/'){
				if(!a) ok = false;
				else r /= a;
			}
			switch (c) {
				case '+': r += a; break;
				case '-': r -= a; break;
				case '*': r *= a; break;
			}
		}
		if(t == r && ok)  cout << "Yes\n";
		else 		cout << "No\n";
	}
}
