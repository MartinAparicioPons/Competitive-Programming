#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n, m, a, c, r;
	cin >> n >> m >> a;
	c = (n / a);
	if(n%a) c++;
	r = (m / a);
	if(m%a) r++;
	cout << r * c << endl;
}
