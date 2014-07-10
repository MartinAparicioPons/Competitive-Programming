#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <cmath>
#include <utility>
#include <set>
#include <stdio.h>
using namespace std;
#define MAX_PRIMOS 1000005

char* primes;
void cachePrimes(int n){
    int i,j;
    primes[0] = 1;
    primes[1] = 1;
    for(i=4;i<=n;i+=2)
        primes[i] = 1;
    for(i=3;i*i<=n;i+=2)
        if(!primes[i])
            for(j=i*i;j<=n;j+=i)
                primes[j] = 1;
}

int main() {
    int n,i;
    primes = (char*) malloc(MAX_PRIMOS+1);
	for(int j = 2; j <= MAX_PRIMOS; j++) primes[j] = 0;
    cachePrimes(MAX_PRIMOS);
	cin >> n;
	while (n!= 0){
		printf("%d = ", n);
		for(i=2;n-i>=2;i++){
			if((primes[i] == 0) && (primes[n-i] == 0)){
				printf("%d + %d\n",i ,n-i);
				break;
			}
		}
		cin >> n;
	}
    return 0;
}