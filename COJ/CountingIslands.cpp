#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;

//prob WA

int main(){
	int n, me, ma, i, j, I;
	cin >> n;
	while(n!=0){
		char m[n][n];		//input
		int c[n][n];		//marcados
		int t[n];			//tamaño de la isla i
		memset(c, 0, sizeof(c));
		memset(t, 0, sizeof(t));
		
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++)
				cin >> m[i][j];
		}
		
		for(i = 0; i < n; i++){
			for(j = 0; (!c[i][j]) && (j < n); j++){
				if ((m[i][j] == 'l')){
					c[i][j] = 1;
					
				}
			}
		}
		
		
		cin >> n;
	}
	
	
}
