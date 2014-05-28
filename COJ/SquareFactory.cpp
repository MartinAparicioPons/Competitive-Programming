#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#define MOD 1000003
using namespace std;

//WA

typedef unsigned long tint;

tint modExp(tint x, tint y, tint n){
	tint s=1, t=x, u=y;
	while(u) {
		if (u&1) 
			s=(s*t)%n;
		u>>=1;
		t=(t*t)%n;
	}
	return s;
}

int main(){
	tint c, n, i;
	cin >> c;
	for(;c--;){
		cin >> n;
		if (n == 0) {
			printf("1\n");
			continue;
		}
		if (n == 1) {
			printf("5\n");
			continue;
		}
		printf("%lu\n", (((modExp(4,n+1, MOD)) - 1)/3));
	}
}
