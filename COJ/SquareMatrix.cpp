#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#define ABS(x) ((x)>0)?(x):(-x)
using namespace std;

typedef unsigned long long int tint;
tint n;

tint m(tint a, tint b){
	return(n*b - (n-a));
}

int main(){
	int k, i, r, c;
	cin >> n >> k >> c >> r;
	if(k<0)
		if(k%4==0)
			k=0; 
		else
			((k%4)!=-2)?k=((k-2)%4):k=2;
	else
		k=(k%4);
	switch (ABS(k)) {
		case 0: cout << m(r, c); break;
		case 3: cout << m(n+1-c,r); break;
		case 2: cout << m(n+1-r,n+1-c); break;
		case 1: cout << m(c,n+1-r); break;
	}
	return 0;
}