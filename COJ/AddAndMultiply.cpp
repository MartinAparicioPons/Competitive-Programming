#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;


int main(){
	int t;
	long long a, b, c, res, max;
	cin >> t;
	for(;t--;){
		cin >> a >> b >> c;
		res = a+b*c;
		if(res > a*b+c) res = a*b+c;
		if(res > a*(b+c)) res = a*(b+c);
		if(res > b*(a+c)) res = b*(a+c);
		if(res > c*(a+b)) res = c*(a+b);
		if(res > c*a+b) res = c*a+b;		
		printf("%lli ", res);
		res = a+b*c;
		if(res < a*b+c) res = a*b+c;
		if(res < a*(b+c)) res = a*(b+c);
		if(res < b*(a+c)) res = b*(a+c);
		if(res < c*(a+b)) res = c*(a+b);
		if(res < c*a+b) res = c*a+b;
		printf("%lli\n", res);
	}
}