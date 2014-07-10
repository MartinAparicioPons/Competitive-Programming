#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#include <vector>
#include <cmath>
#define sigma 0.0001
#define sq2 (1/sqrt(2))
using namespace std;

double sqtwo(int pot){
	double aux = 1.0;
	for (int i = 0; i < pot; i++){
		aux *= sq2;
	}
	return aux;
}

int main(){
	int n, a, t;
	double l;
	cin >> t;
	for(int j = 0; j < t; j++){
		cin >> a >> n;
		l = (a*sqtwo(n-1));
		printf("Case #%d: %.2lf\n", j+1, (l*l) + sigma);
	}
}
