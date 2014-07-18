#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define prc(c) printf("%c\n", c)
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) for(i = 0; i < n; i++)
using namespace std;

int main () {
	int n, m, t, i, j;
	scd(t);
	while(t--){
		scd2(n, m);
		if(n == m){
			if(n%2 == 0){
				prc('L');
			} else {
				prc('R');
			}
		} else if(n < m){
			if(n%2 == 0){
				prc('L');
			} else {
				prc('R');
			}
		} else if(n > m){
			if(m%2 != 0){
				prc('D');
			} else {
				prc('U');
			}	
		}
	}
}
