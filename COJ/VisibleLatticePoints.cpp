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

tint pre[1002];

void precalcular(){
	int k,i,j;
	pre[0] = 0;
	pre[1] = 3;
	pre[2] = 5;
	pre[3] = 9;
	tint aux;
	for (i = 4; i <= 1000; i++){
		aux = 0;
		for(j = 1; j < i; j++){
			if(gcd(j,i) == 1)
				aux++;
		}
		pre[i] = pre[i-1] + 2*aux;		
	}	
}

int main () {
	tint total, aux;
	int c, n, i, j, k;
	precalcular();
	cin >> c;
	for (i = 1; i <= c; i++){
		cin >> n;
		printf("%d %d %llu\n", i, n, pre[n]);
	}

}