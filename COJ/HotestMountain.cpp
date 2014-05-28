#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;

int main(){
	int t, mi;
	double a, b;
	b = -999.0;
	cin >> t;
	for(int i = 1; i <= t; i++){
		cin >> a;
		if (a >= b) {
			b = a;
			mi = i;
		}
	}
	printf("%d\n", mi);
}