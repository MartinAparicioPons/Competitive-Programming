#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;

bool digitos_iguales(int a ){
	bool dig[10];
	memset(dig, false, sizeof(dig));
	while (a != 0){
		if(dig[a%10]) return false;
		dig[a%10] = true;
		a/=10;
	}
	return true;
}

int main(){
	int n, m, ac;
	while(cin >> n >> m){
		ac = 0;
		for(int i = n; i <= m; i++){
			if(digitos_iguales(i)) ac++;
		}
		printf("%d\n", ac);
	}
}