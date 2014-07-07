#include <cstdio>
#include <vector>
#include <set>
#include <queue>
#include <stack>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdlib>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(y,x) scanf("%d %d", &y, &x)
#define prd(x) printf("%d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define prc(c) printf("%c\n", c)
using namespace std;

int main(){
	int m, M, a, b, c, i;
	scd(a);
	for(;a--;){
		scd(b);
		for(M = -1, m = 100, i = 0; i < b; i++){
			scd(c);
			if(c > M) M = c;
			if(c < m) m = c;
		}
		prd(2*(M - m));
	}
}
