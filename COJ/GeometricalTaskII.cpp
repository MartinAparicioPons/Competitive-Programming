#include<cstdio>
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#define pi 3.14
using namespace std;

int main(){
	string shape;
	double a,b;
	cin >> shape;
	if(shape == "circle"){
			scanf("%lf", &a);
		printf("%.2lf\n", (a*a*pi));
	} else {
		if(shape == "triangle"){
			scanf("%lf %lf", &a, &b);
			printf("%.2lf\n", (a*b/2));
		} else {
			scanf("%lf %lf", &a, &b);
			printf("%.2lf\n", (a*b/2));
		}
	}
}