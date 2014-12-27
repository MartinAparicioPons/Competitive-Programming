#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	long long a, b, i, j, r, n, B;
	while(cin >> a >> b){
		cin >> s;
		n = s.size();
		b = a - b;
		for(i = B = 0; i < n; i++){
			if(s[i] == 'B') B++;
		}
		for(i = B-1, j = B, r = 0; i >= 0 && j < n; i--, j++){
			while(i >= 0 && s[i] == 'B') i--;
			while(j < n  && s[j] == 'W') j++;
			if(j >= n || i < 0) break;
			if((j-i)*b <= a){
				r += (j-i)*b;
			} else {
				r += a;
			}
		}
		cout << r << endl;
	}
}
