#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


int main(){
	long long int a,i,j,k;
	int c[32];
	cin >> a;
	while(a != 0){
		i=0;
		j=0;
		printf("The parity of ");
		while(a!=0){
			c[j++] = a%2;
			if (a%2 == 1) i++;
			a/=2;
		}
		for (k = j-1; k >= 0; k--){
			printf("%d", c[k]);
		}
		printf(" is %d (mod 2).\n", i);
		cin >> a;
	}
}
