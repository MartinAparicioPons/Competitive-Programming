#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <functional>
#include <vector>
#include <cmath>
#include <cstring>
#include <string>
#define _2(n) (1<<(n))
using namespace std;
typedef long long tint;

int main(){
	int i, a, n, m, j, b;
	string s, z;
	cin >> s >> z;
	while((s != "0") || (z != "0")){
		n = s.size();
		m = z.size();
		for(i = n - 1, a = 0, j = 0; (i >= 0) && (i > n - 3); i--, j++){
			a += ((int)pow(10, j))*(s[i] - '0');
		}
		for(i = m - 1, b = 0, j = 0; (i >= 0) && (i > m - 3); i--, j++){
			b += ((int)pow(10, j))*(z[i] - '0');
		}
		if((b % 4 == 0) && (b != 0))
			b = 4;
		else
			b %= 4;
		if((a % 10 == 0) && (a != 0))
			a = 10;
		else
			a %= 10;
		
		j = ((int)(pow(a, b)))%10;
		printf("%d\n", j);
		cin >> s >> z;
	}
}