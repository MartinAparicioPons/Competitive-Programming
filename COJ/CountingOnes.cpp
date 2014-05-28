#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <string>
typedef unsigned long long tint;
using namespace std;

tint cantidadDeUnos(tint n) {
	tint i, aux, total = 0;
	
	for (i=2; i<=n; i*=2) {
		if (n % i != 0) { 
			aux = n + (i - (n % i));
			total += ((aux/2) - ((i - (n % i)) - 1));
			if (n < (aux - (i/2))) {
				total += (((aux - (i/2)) - n) - 1);
			}
		} else {
			total += (n/2);
		}
	}
	
	total += ((n - (i/2)) + 1);
	
	return total;
}

tint a, b, r, i, cantA, cantB, n;

int main() {
	cin >> n;
	for(;n--;){
		cin>>a>>b;
		
		if (b == 0) {
			printf("0\n");
		} else {
			if (a == 0) {
				cantB = cantidadDeUnos(b);
				printf("%llu\n",cantB);
			} else {
				r = 0;
				for(i=a; i!=0; i/=2) {
					r += (i % 2);
				}
				cantA = cantidadDeUnos(a);
				cantB = cantidadDeUnos(b);
				r += (cantB - cantA);
				
				printf("%llu\n",r);
			}
		}
		
	}
	return 0;
}