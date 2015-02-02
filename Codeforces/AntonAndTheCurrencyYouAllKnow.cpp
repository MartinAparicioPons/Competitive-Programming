#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int i, n;
	string s, mn="", mx="";
	cin >> s;
	n = s.size();
	for(i = n-1; i >= 0; i--){
		if((s[i]-'0')%2 == 0){
			swap(s[n-1], s[i]);
			mn = s;
			swap(s[n-1], s[i]);
			break;
		}
	}
	for(i = 0; i+1 < n; i++){
		if((s[i]-'0')%2 == 0 && s[i] < s[n-1]){
			swap(s[n-1], s[i]);
			mx = s;
			swap(s[n-1], s[i]);
			break;
		}
	}
	if(mn == "") cout << "-1\n";
	else cout << max(mn, mx) << "\n";
}
