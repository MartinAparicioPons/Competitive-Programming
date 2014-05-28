#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdio.h>
#define pi 3.141592653589793
using namespace std;

int main(){
	int n, t;
	double r, R, alfa;
	cin >> t;
	for(int i = 1; i <= t; i++){
		cin >> R >> n;
		if (n == 2) {
			printf("Scenario #%d:\n%.3lf\n\n", i, (R/2.0));
			continue;
		}
		alfa = sin(pi/n);
		r = (alfa*R)/(alfa + 1.0);
		printf("Scenario #%d:\n%.3lf\n\n", i, r);
	}
}