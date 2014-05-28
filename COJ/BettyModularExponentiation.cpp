#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
#define MOD 1000000000
using namespace std;

int main(){
	int t;
	unsigned long long int a, b, r;
	cin >> t;
	for(;t--;){
		cin >> a >> b;
		for(r=1;b>0;){
			if(b % 2 == 1)
				r = (r*a)%MOD;
			b = b/2;
			a = (a*a)%MOD;
		}
		cout << r << endl;
	}
}