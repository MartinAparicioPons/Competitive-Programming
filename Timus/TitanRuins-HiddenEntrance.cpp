#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long int tint;

int main(){
	tint i, n, a, b, c, d, max=-1, maxi;
	cin >> n;
	cin >> c;
	cin >> b;
	for(i=3; i<=n; i++){
		cin >> a;
		d = c;
		c = b;
		b = a;
		cout << a << b << c << "\n";
		if((b+c+d) > max) {
			max = (b+c+d);
			maxi = i-1;
		}
	}
	cout << max << " " << maxi;
}