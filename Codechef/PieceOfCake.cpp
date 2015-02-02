#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int i, m, mi, n, a[5000], T;
	string s;
	cin >> T;
	while(T--){
		cin >> s;
		n = s.size();
		memset(a, 0, sizeof a);
		for(i = 0; i < n; i++){
			a[s[i]]++;
		}
		m = -1;
		for(i = 0; i < 500; i++){
			if(m < a[i]){
				m = a[i];
			}
		}
		if(n%2 == 0 && m == n/2)cout << "YES\n";
		else cout << "NO\n";
	}
}
