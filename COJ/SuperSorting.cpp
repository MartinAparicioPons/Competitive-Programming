#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	int n, i, k;
	cin >> n;
	for(;n--;){
		cin >> i;
		for(k = 2; k <= i; k++)
				printf("%d ", k);
		printf("1\n");
	}
}