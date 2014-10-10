#include <bits/stdc++.h>
#define for0(i, n) for(i = 0; i < n; i++)
#define fora(i, n, a) for(i = a; i < n; i++)
#define dprd2(x,y) printf("| %d %d\n", x, y)
#define NL() printf("\n")
using namespace std;



int main() {
	bool m[8][8], res = true;
	int i, j, k, l, q = 0;
	char in;
	for0(i, 8){
		for0(j, 8){
			in = getchar();
			if(in == '*') {
				m[i][j] = true;
				q++;
			} else m[i][j] = false;
		}
		in = getchar();
	}
	if(q != 8) res = false;
	for0(i, 8){
		for0(j, 8){
			if(m[i][j]){
				for(k = i+1; k < 8; k++){
					if(m[k][j]) res = false;
				}
				for(l = j+1; l < 8; l++){
					if(m[i][l]) res = false;
				}
				for(k = 1; max(i+k,j+k) < 8; k++){
					if(m[i+k][j+k]) res = false;
				}
				for(k = 1; (i-k >= 0) && (j+k < 8); k++){
					if(m[i-k][j+k]) res = false;
				}
			}
		}
	}
	if(res){
		printf("valid\n");
	} else {
		printf("invalid\n");
	}
}
