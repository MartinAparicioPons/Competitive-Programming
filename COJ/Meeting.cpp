#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main () {
	int t, a, b, k;
	double res;
	cin >> t;
	for(;t--;){
		cin >> a >> b >> k;
		res = (k+0.0)/(a+b+0.0);
		printf("%.4lf\n", res);
	}
}
