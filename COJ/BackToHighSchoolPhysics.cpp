#include <stdio.h>
#include <iostream>
using namespace std;

int main () {
	long long int v,t, res;
	while ((scanf("%d %d", &v, &t)) == 2) {
		res = (v*t*2);
		printf("%d\n", res);
	}		
}