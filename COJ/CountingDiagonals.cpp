#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
typedef unsigned long long tint;

int main(){
	tint n, m, x;
	cin >> n >> m;
	x = (m*(m-3));
	if (x == 2*n)
		printf("yes");
	else
		printf("no");
}