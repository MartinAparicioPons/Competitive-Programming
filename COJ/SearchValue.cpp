#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

int main(){
	double res;
	for(;cin >> res;){
		res = (res*sqrt(3.0))/4.0;
		printf("%.6lf\n", res);
	}
}