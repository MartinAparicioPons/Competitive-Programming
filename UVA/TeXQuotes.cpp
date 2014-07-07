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
using namespace std;

int main(){
	int i, k=0, n;
	char s[100000];
	while(gets(s)){
		for(n = strlen(s), i=0; i < n; i++){
			if(s[i] == '"'){
				if(k == 0){
					printf("``");
					k = 1;
				} else {
					printf("''");
					k = 0;
				}
			} else {
				printf("%c", s[i]);
			}
		}
		printf("\n");
	}
}
