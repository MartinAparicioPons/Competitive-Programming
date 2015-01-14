#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main () {
	unsigned long long res=0, i, j=0;
	for(i=1; i <= 100; i++) j += i*i;
	for(i=1; i <= 100; i++) res += i;
	res = res*res;
	res -= j;
	cout << res;
	
}