#include <cstdio>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <iostream>
#define pi 3.14159
using namespace std;
typedef unsigned long long tint;

int main () {
	tint n, i;
	char f;
	double max=0, a, b, A;
	cin >> n;
	for(;n--;){
		cin >> f;
		if(f == 'S'){
			cin >> a;
			A = pi*a*a*a*(4.0/3.0);
		} else {
			if(f == 'C'){
				cin >> a >> b;
				A = (1.0/3.0)*pi*a*a*b;
			} else {
				cin >> a >> b;
				A = pi*a*a*b;
			}
		}
		if(A > max) max = A;
	}
	printf("%.3lf", max);
	
}