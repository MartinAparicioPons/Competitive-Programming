#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#define pi 3.141592653589793
using namespace std;

double sqr(double x){
	return x*x;
}

int main(){
	int t;
	double c,s,p,r, res;
	cin >> t;
	while(t--){
		cin >> r;
		c = sqrt(3) * r;
		s = (3.0*r + c)/2.0;
		p = (s-r)*(s-2*r)*(s-c);
		res = sqrt(s*p)/s;
		//res = (2.0*r*2*r*c)/(sqrt(1.0*(r+2*r+c)*(r+2*r-c)*(r-2*r+c)*(-r+2*r+c)));
		printf("%.1lf\n", 2.0*res);
	}
}
