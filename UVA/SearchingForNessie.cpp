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
using namespace std;

int main(){
	int a, b, c;
	scd(a);
	for(;a--;){
		scd2(b,c);
		prd((b/3)*(c/3));
	}
}
