#include <bits/stdc++.h>
using namespace std;

int diff(int a, int b){
	return min(abs(a - b), 24 - abs(a-b));
}

int main(){
	int n, a[1010], i, d1, d2;
	while(cin >> n){
		for(i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		
		d1 = d2 = 0;
		for(i = 0; i < n; i+=2){
			d1 += diff(a[i], a[i+1]);
		}
		for(i = 1; i < n; i+=2){
			d2 += diff(a[i], a[(i+1)%n]);
		}
		cout << min(d1, d2) << endl;
	}
}
