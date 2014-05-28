#include <cstdio>
#include <iostream>
#include <set>
#include <cmath>
#include <string>
using namespace std;

//WA

int main(){
	int t, x1,x2,y1,y2, hc, hg;
	double res, b, b2, x3;
	bool buleano;
	cin >> t;
	for(;t--;){
		cin >> x1 >> y1 >> x2 >> y2;
		hc = min(abs(y1), abs(y2));
		hg = max(abs(y1), abs(y2));
		b = abs(x1 - x2);
		//cout << hc << "!" << hg << "?" << b << ",\n";
		buleano = ((y1 < 0) && (y2 > 0))||((y2 < 0) && (y1 >0));
		if((x1 == x2)||((y2 == 0)&&(y1 == 0)))
			printf("0.000\n");
		else{
			if(!buleano){
				puts("Entro");
				res = (b*hc) + ((hg - hc)*b)/2.0;
			} else {
				x3 = (-1.0*y1*(x2-x1+0.0)/(y2-y1+0.0)) + x1*1.0;
				if(x1 < x2) swap(x1, x2);	
				b2 = abs(min(x1,x2) - x3);
				res = (b2*hg*1.0)/2.0;
				printf("%d\t", hg);
				b2 = abs(max(x1,x2) - x3);
				res += (b2*hc*1.0)/2.0;
				printf("%lf\t", res);
				printf("%.4lf, %.4lf, \n", x3, b2);
			}
			printf("%.3lf\n", res);
		}
	}
}
