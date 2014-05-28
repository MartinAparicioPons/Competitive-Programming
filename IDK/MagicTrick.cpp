#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <utility>
using namespace std;
//typedef long long tint;

int main () {
	int k,j,i, t, a1, a2, auxxde, T;
	int cc[4][4], aux[4];
	cin >> t; 
	for(T=1; T<=t; T++){
		k = 0;
		cin >> a1; a1--;
		for(i = 0; i<4; i++){
			for(j = 0; j<4; j++){
				cin >> cc[i][j];
			}
		}
		aux = cc[a1];
		cin >> a2; a2--;
		for(i = 0; i<4; i++){
			for(j = 0; j<4; j++){
				cin >> cc[i][j];
			}
		}
		for(i = 0; i < 4; i++){
			for(j = 0; j < 4; j++){
				if(aux[i] == cc[a2][j]){
					k++;
					auxxde = aux[i];
				}
			}
		}
		printf("Case #%d: ", T);
		if(k == 0) printf("Volunteer cheated!\n");
		if(k == 1) printf("%d\n", auxxde);
		if(k >= 2) printf("Bad magician!\n");
		//cout << k;
	}
	return 0;
}