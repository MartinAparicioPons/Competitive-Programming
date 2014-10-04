#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a[1100], d[1100], i, j, b, res = 0, c, aux;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a+n);
	for(i = 0; i < n; i+=2){
		d[i/2] = a[i+1] - a[i];
	}
	sort(d, d+(n/2));
	if(d[(n/2)-1] == 0)
		printf("-1\n");
	else {
		i = 0; j = (n/2) - 1; b = 0; c = 0;
		while(i <= j){
			if(c > b + d[i]){
				b += d[i];
				res++; i++;
			} else {
				c += d[j];
				j--;
			}
		}
		cout << res << endl;
	}
}
