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

#define MAX 1000000

char* primes;
void cachePrimes(){
    int i,j;
    primes[0] = 1;
    primes[1] = 1;
    for(i=4;i<=MAX;i+=2)
        primes[i] = 1;
    for(i=3;i*i<=MAX;i+=2)
        if(!primes[i])
            for(j=i*i;j<=MAX;j+=i){
				primes[j] = 1;
			}
}

int main(){
	int a, b, i, ac;
	primes = (char*) malloc(MAX+1);
	for (int j = 0; j <= MAX; j++) {
		primes[j] = 0;
	}
	cachePrimes();
	cin >> a >> b;
	for(;a!=0;){
		ac = 0;
		for(i=a; i<=b; i++){
			if(primes[i]==0)
				ac++;
		}
		printf("%d\n", ac);
		cin >> a >> b;
	}
}