#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
typedef unsigned long long tint;
using namespace std;



int main(){
	tint i=0, a;
	double r;
	vector<double> v;
	for(;cin >> a;){
		i++;
		r = sqrt(a);
		v.push_back(r);
	}
	for(;i--;){
		printf("%.4lf\n", v[i]);
	}
}