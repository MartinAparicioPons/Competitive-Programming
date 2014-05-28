#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int m[102][102], n, ci, fi;

int contarI(char c){
	int res=0, i, j, aux;
	if(c == 'f'){
		for(i = 1; i <= n; i++){
			aux = 0;
			for(j = 1; j <= n; j++)
				if(m[i][j] == 1) aux++;
			if(aux%2 == 1) {
				res++;
				fi = i;
			}
		}
	} else {
		for(i = 1; i <= n; i++){
			aux = 0;
			for(j = 1; j <= n; j++)
				if(m[j][i] == 1) aux++;
			if(aux%2 == 1) {
				res++;
				ci = i;
			}
		}
	}
	return res;
}


int main() {
	int i, j, f, c;
	cin >> n;
	for(;n;){
		for(i = 1; i <= n; i++){
			for(j = 1; j <= n; j++){
				cin >> m[i][j];
			}
		}
		f = contarI('f');
		c = contarI('c');
		if((f > 1) || (c > 1)){
			printf("Corrupt\n");		
		}
		if((f == 1) && (c == 1)){
			printf("Change bit (%d,%d)\n", fi, ci);
		}
		if((f == 0) && (c == 0)){
			printf("OK\n");
		}
		cin >> n;
	}
}