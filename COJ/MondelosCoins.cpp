#include <cmath>
#include <iterator>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <iostream>
#define pi (2.0*acos(0))
#define sq3 sqrt(3)
typedef unsigned long long tint;
using namespace std;


int main(){
	double res, r;
	for(;cin >> r;){
		r/=2.0;
		res = ((pi*r*r)/2.0) - ((sq3*r*r)/2.0);
		printf("%.3lf\n", res);
	}
}