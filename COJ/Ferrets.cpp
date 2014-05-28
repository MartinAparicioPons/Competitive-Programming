#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
using namespace std;


unsigned long long k, n, h=0, aux, i;

int main(){
	cin >> k >> n;
	for(i=0; i < k; i++){
		cin >> aux;
		if(aux >= n)
			h+=(aux/n);
	}
	printf("%d", h);
}