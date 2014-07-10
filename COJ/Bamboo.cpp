#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int t;
	cin >> t;
	double h, h1, b, prom;
	for(int i = 0; i < t ; i++){
		scanf("%lf %lf", &h, &b);
		h1 = (b*b + h*h);
		h1 /= 2*h;
		h1 = h - h1;
		printf("%.1lf\n", h1);
		prom += h1;
	}
	printf("%.1lf\n", prom/t);
	

}
