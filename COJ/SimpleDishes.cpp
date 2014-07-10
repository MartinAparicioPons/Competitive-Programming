#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main () {
	long t, n, j;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> n;
		for (j = 0; n/2 > 0; j++){
			if (n % 2)
				printf("%d ", j);
			n /= 2;
		}
		printf("%d\n", j);
	}
}