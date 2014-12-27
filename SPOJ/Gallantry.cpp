#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, i, a[1010], g1, g2, r, b[1010];
	g1 = g2 = 0;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n, greater<int>());
	for(i = 0; i < n; i+=2){
		b[i/2] = a[i] - a[i+1];
	}
	sort(b, b+(n/2), greater<int>());
	for(i = 0; i < n; i++){
		g1 += b[i];
	}
	if(g1 == 0){
		cout << -1 << endl;
		return 0;
	}
	for(i = 0; i*2 < n; i++){
		g2 += b[i];
		g1 -= b[i];
		if(g1 < g2){
			cout << (n/2)-(i+1) << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}
