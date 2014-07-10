#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#include <vector>
#include <cmath>
#define pi 3.14159265359
#define sigma 0.000009
using namespace std;

int main(){
	int n, i;
	vector<int> c;
	double total;
	bool v = true;
	cin >> n;
	total = 0.0;
	c.resize(n);
	for(i = 0; i < n; i++)
		cin >> c[i];
	sort(c.begin(), c.end());
	for(i = n-1; i >= 0; i--){
		if (v){
			total += c[i]*c[i]*pi;
		} else {
			total -= c[i]*c[i]*pi;
		}
		v = !v;
	}
	printf("%.4lf\n", total+sigma);
}
