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
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define prc(c) printf("%c\n", c)
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) for(i = 0; i < n; i++)
using namespace std;

int main(){
	int t, n, i, j;
	char a[20][20];
	bool ok;
	scd(t);
	while(t--){
		scd(n);
		ok = true;
		for(i = 0; i < n; i++){
			scanf("%s", a[i]);
		}
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if((a[i][j] == a[i+1][j]) && (i != n-1)){
					ok = false;
					i = n;
					break;
				} else {
					if((a[i][j] == a[i][j+1]) && (j != n-1)){
						ok = false;
						i = n;
						break;
					}
				}
			}
		}
		if (ok)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
