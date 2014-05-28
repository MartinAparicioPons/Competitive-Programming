#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#define ABS(x) ((x)>0)?(x):(-x)
using namespace std;


int main(){
	int t, r, c;
	cin >> t;
	for(;t--;cin >> r >> c, printf("%s\n", ((r+c)%2 == 0)?"Second":"First"));
}