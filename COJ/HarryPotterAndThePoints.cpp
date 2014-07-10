#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


int main(){
	int m;
	unsigned long long i,j,ac;
	cin >> m;
	while (m--){
		cin >> i;
		if (i == 1) {
			printf("1\n");
			continue;
		}
		if (i == 2) {
			printf("5\n");
			continue;
		}
		ac = 0;
		for (j = 1; j < i; j++){
			ac+=j;
		}
		printf("%llu\n", (ac*4 + 1));
	}
}
