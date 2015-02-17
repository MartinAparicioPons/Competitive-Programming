#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int t, n, i;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		n = s.size();
		bool ok = true;
		int p; char j;
		for(j = '0'; j <= '9'; j++){
			p = 0;
			for(i = 0; i < n; i++){
				p += s[i] == j;
			}
			if(p >= 3) ok = false;
		}
		for(i = 0; i < n-2; i++){
			if(s[i] - s[i+1] == 1 && s[i+1] - s[i+2] == 1) ok = false;
			if(s[i] - s[i+1] == -1 && s[i+1] - s[i+2] == -1) ok = false;
		}
		if(ok)	cout << "ACCEPTABLE\n";
		else 	cout << "WEAK\n";
	}
}
 
