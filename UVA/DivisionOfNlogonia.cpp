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
	int d, e, a, b, c, i;
	while(scd(a), a){
		scd2(d,e);
		for(;a--;){
			scd2(b,c);
			if((b == d)||(c == e))
				printf("divisa\n");
			else if((b > d)&&(c > e))
				printf("NE\n");
			else if((b < d)&&(c > e))
				printf("NO\n");
			else if((b > d)&&(c < e))
				printf("SE\n");
			else if((b < d)&&(c < e))
				printf("SO\n");
		}
	}
}
