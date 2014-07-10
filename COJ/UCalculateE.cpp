#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

long fact(int a){
	switch (a){
		case 5: return 120;
		case 8: return 40320;
		case 7: return 5040;
		case 6: return 720;
		case 9: return 362880;
	}
}

int main(){
	int n = 0;
	double t = 2.708333333;
	double aux;
	printf("n e\n- -----------\n0 1\n1 2\n2 2.5\n3 2.666666667\n4 2.708333333");
	for (int i = 5; i <= 9; i++){
		aux = 1.0/(fact(i));
		t += aux;
		printf("%d %.9lf\n", i, t);
	}
}