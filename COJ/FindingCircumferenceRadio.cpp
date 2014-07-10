#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;



int main(){
	int l1, l2, l3;
	double s, p, r;
	while(cin >> l1 >> l2 >> l3){
		s = (l1 + l2 + l3 + 0.0)/2;
		p = (s-l1)*(s-l2)*(s-l3);
		if(p > 0){
			r = (sqrt(s*p)/s);
			printf("%.2lf ", r);
			r = (2.0*l1*l2*l3)/(sqrt(1.0*(l1+l2+l3)*(l1+l2-l3)*(l1-l2+l3)*(-l1+l2+l3)));
			printf("%.2lf\n", r/2.0);
		} else
			if(p == 0){
				printf("0.00 %.2lf\n", (l1 + l2 + l3)/4.0);
			} else
				printf("ERROR\n");
	}
}
