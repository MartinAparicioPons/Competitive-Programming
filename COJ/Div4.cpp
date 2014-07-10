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
	int i, t, a, n, m, j, b;
	string s, z;
	scanf("%d", &t);
	while(t--){
		cin >> s >> z;
		n = s.size();
		m = z.size();
		for(i = n - 1, a = 0, j = 0; (i >= 0) && (i > n - 4); i--, j++){
			a += ((int)pow(10, j))*(s[i] - '0');
		}
		for(i = n - 1, b = 0, j = 0; (i >= 0) && (i > m - 4); i--, j++){
			b += ((int)pow(10, j))*(z[i] - '0');
		}
		b %= 4;
		a = ((int)(pow(a, b)))%10;
		printf("%d\n", a);
	}
}