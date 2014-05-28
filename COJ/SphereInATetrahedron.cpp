#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double area(double a,double b,double c){
	double s = (a+b+c)/2.0;//semiperimeter
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

double u, v, w, W, V, U, a1, a2, a3, a4, temp, vol;
int t;

int main(){
	cin >> t;
	while(t--){
		cin >> u >> v >> w >> W >> V >> U;
		a1 = area(u,v,W);
		a2 = area(U,v,w);
		a3 = area(V,u,w);
		a4 = area(W,U,V);
		temp=0;
		temp=a1+a2+a3+a4;
		vol=sqrt(4*u*u*v*v*w*w- u*u*(v*v+w*w - U*U)*(v*v+w*w-U*U) - v*v*(w*w+u*u - V*V)*(w*w+u*u-V*V) - w*w*(u*u + v*v - W*W)*(u*u+v*v-W*W) + (v*v +w*w - U*U)*(w*w+u*u- V*V)*(u*u+v*v - W*W))/12;
		temp=(vol*3.0)/temp;
		printf("%.4lf\n", temp);	
	}
}