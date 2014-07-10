#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#include <vector>
#include <cmath>
#define pi (3.141592653589793116)
using namespace std;

int main(){
	int n, i, t;
	vector<int> c;
	double total;
	bool v = true;
	cin >> t;
	while(t--){
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
		printf("%.10lf\n", abs(total));
	}
}
