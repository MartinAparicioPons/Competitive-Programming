#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
typedef unsigned long long tint;

int gcd (int a,int b) {
	if ( b == 0) return a ;
	return gcd(b, a % b);
}

tint pre[102];

void precalcular(){
	int k,i,j;
	pre[0] = 0;
	pre[1] = 7;
	pre[2] = 19;
	tint aux;
	for (i = 3; i <= 100; i++){
		aux = 0;
		for(j = 1; j <= i; j++){
			for(k = 1; k <= j; k++){
				if(gcd(gcd(j,i), k) == 1)
					aux++;
			}
		}
		pre[i] = pre[i-1] + (6*aux);
	}	
}

int main () {
	int c, n, i;
	precalcular();
	cin >> c;
	for (i = 1; i <= c; i++){
		cin >> n;
		printf("%llu\n", pre[n]);
	}

}