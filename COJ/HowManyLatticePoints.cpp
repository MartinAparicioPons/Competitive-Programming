#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
	
long long int gcd (long long int a,long long int b) {
	if ( b == 0) return a ;
	return gcd(b, a % b);
}
long long int abso(long long int a){
	if (a < 0) return -a;
	return a;
}

int main () {
	long long int ax,ay,az,bx,by,bz;
	while(cin >> ax >> ay >> az >> bx >> by >> bz){
			bx -= ax;
			by -= ay;
			bz -= az;
			cout << (abso(gcd(gcd(bx, by), bz)) + 1) << endl;
	}

}