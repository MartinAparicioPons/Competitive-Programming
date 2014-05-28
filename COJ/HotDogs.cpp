#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;


int main(){
	int h, p;
	double res;
	while(cin >> h >> p){
		res = h/(p+0.0);
		printf("%.2lf\n", res);
	}
}