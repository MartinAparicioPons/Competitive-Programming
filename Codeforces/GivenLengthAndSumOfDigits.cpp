#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int n, m, i, j, M;
	string s = "", z = "";
	cin >> n >> M;
	if(n == 1 && M <= 9) {
		cout << M << " " << M << endl;
		return 0;
	}
	if(!M){
		cout << "-1 -1\n";
		return 0;
	}
	m = M;
	for(i = 0; i < n; i++){
		j = min(9, m);
		s += j + '0';
		m -= j;
	}
	if(m > 0){
		cout << "-1 -1\n";
		return 0;
	}
	m = M - 1;
	for(i = 0; i < n; i++){
		j = min(9, m);
		z += j + '0';
		m -= j;
	}
	string p(z.rbegin(), z.rend());
	p[0]++;
	cout << p << " " << s << endl;
}
