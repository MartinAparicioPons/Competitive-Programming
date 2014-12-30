#include <bits/stdc++.h>
using namespace std;

#define PI (2.0*acos(0.0))

int main(){
	int r, i;
	double a = 0, b = 0;
	for(i = 0; i < 4; i++){
		cin >> r;
		a += (r+1.0)/2.0;
	}
	for(i = 0; i < 4; i++){
		cin >> r;
		b += (r+1.0)/2.0;
	}
	if(a == b) 		printf("Tie\n");
	else if(a > b)  printf("Gunnar\n");
	else 			printf("Emma\n");
}
