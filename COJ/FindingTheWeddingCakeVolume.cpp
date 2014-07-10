#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#include <map>
#include <cmath>
#define pi 3.141592653589793
using namespace std;

double sqr(double x){
	return x*x;
}

int main(){
	int t, n, a, b;
	double x;
	cin >> t;
	while (t--){
		cin >> n;
		x = 0.0;
		while (n--){
			cin >> a >> b;
			x += a*a*pi*b;
		}
		printf("%.2lf\n", x);
	}
}
