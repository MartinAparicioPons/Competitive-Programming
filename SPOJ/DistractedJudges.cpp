#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[1000100], i;
	bool b[1000100] = {false};
	cin >> n;
	for(i = 1; i <= n; i++){
		cin >> a[i];
	}
	b[n+1] = true;
	for(i = n-1; i > 0; i--){
		if(a[i] + i <= n && b[a[i]+i+1]) b[i] = true;
	}
	for(i = 2; i <= n+1; i++){
		if(b[i]){
			printf("%d\n", i-1);
		}
	}
}
