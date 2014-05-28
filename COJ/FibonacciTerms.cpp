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
#define MAX 100010
#define MOD 10000

int F[MAX];
void fibos(){
	int i;
	F[0] = 0;
	F[1] = 0;
	F[2] = 1;
	F[3] = 1;
	for(i = 4; i <= MAX; i++){
		F[i] = (F[i-1] + F[i-2])%MOD;
	}
	return;
}


int main(){
	int n, t;
	fibos();
	cin >> t;
	for(;t--;){
		cin >> n;
		printf("%d %d %d\n", F[n-1], F[n], F[n+1]);
	}
}