#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int main(){
	double r[4];
	double max;
	double a,b,c,d;
	int maxi;
	cin >> a >> b;
	cin >> c >> d;
	r[0] = (a/b + c/d);
	r[1] = (c/a + d/b);
	r[2] = (b/a + d/c);
	r[3] = (a/c + b/d);
	max = -1;
	for(int i = 0; i < 4; i++){
		if(r[i] > max){
			max = r[i];
			maxi = i;
		}
		//printf("%lf\t", r[i]);
	}
	cout << maxi;
}