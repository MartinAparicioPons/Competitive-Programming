#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int T;
	string m, w;
	cin >> T;
	while(T--){
		cin >> m >> w;
		sort(m.begin(), m.end());
		sort(w.begin(), w.end());
		cout << ((m == w)?"YES\n":"NO\n");
	}
}
