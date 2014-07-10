#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;


int main(){
	long long unsigned n, i, j;
	double res;
	vector<long long unsigned> vec;
	cin >> n;
	for(;n!=0;){
		vec.resize(0);
		vec.resize(n);
		for(i = 0; i < n; i++){
			cin >> vec[i];
		}
		sort(vec.begin(), vec.end());
		if(n%2 == 1){
			res = vec[(n-1)/2];
			printf("%.1lf\n", res);
		}else{
			res = vec[(n-1)/2] + vec[n/2];
			res/=2.0;
			printf("%.1lf\n", res);
		}
		
		cin >> n;
	}
}