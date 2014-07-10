#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

int gcd (int a,int b) {
	if ( b == 0) return a ;
	return gcd(b, a % b);
}


int main(){
	int k1,k2,i;
	cin >> k1;
	k2=0;
	for (i = 1; i<k1; i++){
		if (gcd(k1, i) == 1) k2++;
	}
	cout << k2;
}
