#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdio.h>
//#define sigma 0.0001
#define pi 3.141592653589793
using namespace std;

//WA

/*
bool esEntero(float x){
	return((floorf(x) == x)||((floorf(x-sigma) <= (x-sigma))&&(floorf(x+sigma) >= (x+sigma))));
}*/



int main(){
	float i, res, r1, r2, alfa, r, apotema;
	while(cin >> r1 >> r2){
		r = r1+r2;
		alfa = 2.0*asin(r2/r);
		i = (2*pi)/alfa;
		if((i >= 3.0) && (floorf(i) == i)){
			apotema = sqrt((r*r) - (r2*r2));
			res = (r2*2*i*apotema)/2.0;
			printf("%.4f\n", res);
		} else {
			printf("No Solution\n");
		}
	}
}
