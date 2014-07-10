#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#include <map>
#include <cmath>
#define pi 3.141592653589793

using namespace std;



int main(){
	double a, d, b, res, e;
	while(cin >> a){
		e = a/3.0;
		res = a*a;
		res -= e*e*pi;
		res -= 4*(e*(a/2.0)/2.0);
		printf("%.4lf\n", res);
	}
}
