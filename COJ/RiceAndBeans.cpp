#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#define pi 3.141592654
#define sqrt3 1.73205080757
using namespace std;

int main(){
	double p, r, a;
	int t, i;
	cin >> t; 
	for(i = 1;i <= t; i++){
		cin >> p;
		r = p/(2*pi);
		a = (sqrt3/8.0)*r*r;
		printf("Case %d\nRice: %.2f\nBeans: %.2f\n", i, 5*a, 7*a);
	}
}