#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdio.h>
#define pi 3.141592653589793
using namespace std;

int main(){
	int r1, r2, h, H;
	double d, res, alfa, b, B;
	cin >> r1 >> r2 >> H >> h;
	while(r1 != 0){
		d = r1 + ((r2-(r1*1.0))/H)*h;
		b = pi*d*d;
		B = pi*r2*r2;
		res = (b + B + sqrt(b*B))*((H-h)/3.0);
		printf("%.4lf\n", res);
		cin >> r1 >> r2 >> H >> h;
	}
}