#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int n, i;
	string s;
	cin >> s;
	n = s.size();
	for(i = 0; i < n; i++){
		if(s[i] >= '5' && !(s[i] == '9' && i == 0))
			s[i] = '9' - s[i] + '0';
	}
	cout << s << endl;
}
