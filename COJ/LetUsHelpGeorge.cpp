#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iterator>
#include <numeric>
#include <iostream>
#include <string>
using namespace std;
typedef unsigned long long tint;


int main() {
	tint i, t, j, n, res;
	cin >> n;
	for(i = 1;n != 0; i++){
		res = 0;
		for(j = 1; j <= n; j++){
			res += j*j;
		}
		printf("Case %llu:\nn = %llu, diamonds = %llu\n", i, n, res);
		cin >> n;
	}
}