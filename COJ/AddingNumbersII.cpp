#include <iostream>
#include <cstdio>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(){
	unsigned long long int aux, a, b, m, M, i;
	cin >> a >> b;
	aux = a;
	M = a+b;
	m = a+b;
	i = 1;
	while (aux > 0){
		if (aux % 10 == 5){
			M += i;
		} else 
			if (aux % 10 == 6){
				m -= i;
			}
		aux /= 10;
		i *= 10;
	}
	i = 1;
	aux = b;
	while (aux > 0){
		if (aux % 10 == 5){
			M += i;
		} else 
			if (aux % 10 == 6){
				m -= i;
			}
		aux /= 10;
		i *= 10;
	}
	printf("%llu %llu", m, M);
}