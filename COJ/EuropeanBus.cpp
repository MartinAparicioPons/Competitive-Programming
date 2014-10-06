#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[33], i, t, n;
	a[0] = 0;
	for(i = 1; i < 31; i++){
		a[i] = a[i-1]*2 + 1;
	}
	cin >> t;
	for(;t--;){
		cin >> n;
		cout << a[n] << endl;
	}
}
