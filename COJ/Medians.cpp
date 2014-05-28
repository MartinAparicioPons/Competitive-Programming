#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<set>
#include<cmath>
using namespace std;

//WA

int main(){
	int a,b,c;
	double A,B,C, res, s;
	for(;cin >> a >> b >> c;){
		A = (2.0/3)*sqrt(-a*a + 2.0*b*b + 2*c*c);
		B = (2.0/3)*sqrt(-b*b + 2.0*a*a + 2*c*c);
		C = (2.0/3)*sqrt(-c*c + 2.0*b*b + 2*a*a);
		s = 0.5*(A + B + C);
		res = sqrt(s*(s - A)*(s - B)*(s - C));
		if(isnan(res))
			printf("-1.000\n");
		else{
			printf("%.3lf\n", res);
		}
	}
}
