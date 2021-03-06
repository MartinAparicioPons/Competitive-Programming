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
#define MAX 10000010
#define MOD 1000000007
typedef unsigned long long tint;

//WA

tint F[MAX], k;
void fibos(){
	tint i, j;
	F[0] = 0;
	//puts("Inicio");
	for(i=1; i<k; i++){
		F[i] = 1;
		for(j=k; j <= k+i; j++)
			F[j] = (F[j] + F[i])%MOD;
	}
	//puts("Medio");
	for(i = k; i < MAX-k-i; i++){
		for(j=i+1; j < MAX; j++)
			F[j] = (F[j] + F[i])%MOD;
		if(i<100)printf("[%llu]=%llu\n", i, F[i]);
	}
	//puts("FIN");
}


int main(){
	tint n, t;
	cin >> t >> k;
	memset(F, 0, sizeof(F));
	fibos();
	for(t=0;t<100;t++){
		printf("[%llu]=%llu\t", t, F[t]);
	}
	for(;t--;){
		cin >> n;
		printf("%llu\n", F[n]);
	}
}
