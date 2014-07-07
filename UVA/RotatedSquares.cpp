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

#define MAX 10000

int N, n, ans[4];
char a[MAX][MAX], b[MAX][MAX], c[MAX][MAX]; 

void rotate90(){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			c[i][j] = b[j][i];
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			b[i][j] = c[i][n-j-1];
		}
	}
}

void find_b_in_a(int in){
	int i, j, k, l, res=0;
	bool ok;
	for(i=0; i < (N-n+1); i++){
		for(j=0; j < (N-n+1); j++){
			ok = true;
			for(k=0; k < n; k++){
				for(l=0; l < n; l++){
					if(a[i+k][j+l] != b[k][l]){
						ok = false;
						k = n;		//Break previous for
						break;
					}
				}
			}
			if(ok)
				res++;
		}
	}
	ans[in]	= res;
}

int main(){
	int i, j;
	while(scd2(N,n), (N || n)){
		for0(i,4)
			ans[i]=0;
		for(i = 0; i < N; i++){
			scanf("%s", a[i]);
		}
		for(i = 0; i < n; i++){
			scanf("%s", b[i]);
		}
		
		find_b_in_a(0);
		for(i=1; i < 4; i++){
			rotate90();
			find_b_in_a(i);
		}
		printf("%d %d %d %d\n", ans[0], ans[1], ans[2], ans[3]);
	}
}
/*
		for(i = 0; i < n; i++){
			printf("%s\n", b[i]);
		}
*/
