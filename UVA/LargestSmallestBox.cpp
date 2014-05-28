#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#define EPSILON 1e-7
using namespace std;

int main(){
	double L, W, mini, maxi;
	for(;cin >> L >> W;){
		mini = (W<L)?(W*0.5):(L*0.5);
		maxi = (L + W - sqrt((double)(L*L - L*W + W*W)))/6.0;
		printf( "%.3lf %.3lf %.3lf\n", maxi+EPSILON, 0.0, mini+EPSILON);
	}
}