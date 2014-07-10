#include <iostream>
#include <cstdio>
#include <set>
#include <algorithm>
#include <map>
#include <cmath>

using namespace std;



int main(){
	double l1, l2, l3;
	double s, p, r;
	while(cin >> l1 >> l2 >> l3){
		s = (l1 + l2 + l3)/2;
		p = (s-l1)*(s-l2)*(s-l3);
		r = (sqrt(s*p)/s);
		if((l1 == 0)||(l2 == 0)||(l3 == 0))
			printf("The radius of the round table is: 0.000\n");	
		else
			printf("The radius of the round table is: %.3lf\n", r);		
	}
}
