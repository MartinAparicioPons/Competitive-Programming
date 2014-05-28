#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdio.h>
#define sq3 (sqrt(3))
using namespace std;

unsigned long long int ni(double num){
	if ((num + 0.5) >= ((unsigned long long int)(num) + 1))
		return (unsigned long long int)(num) + 1;
	else
		return (unsigned long long int)(num);
}

int main(){
	double l, res;
	int n, k;
	cin >> l >> n >> k;
	while(l != 0){
		res = (sq3/(n*n*4.0))*(k*k*l*l)*(((n*1.0*n)/(k*k)) - ((3.0*n)/k) + 3.0);
		printf("%llu\n", ni(res));
		cin >> l >> n >> k;
	}
}