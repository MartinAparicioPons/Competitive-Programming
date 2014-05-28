#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
#define MAX v[n-1]
using namespace std;

int main(){
	int n,t=0,i;
	bool ok = true;
	vector<int> v;
	cin >> n;
	v.resize(n);
	for(i = 0; i < n; i++){
		cin >> v[i];
		t+=v[i];
	}
	sort(v.begin(), v.end());
	if((MAX*100 >= t*45) || ((t*t + v[n-2]*1000 <= MAX*1000) && (MAX*100 >= t*40))){
		printf("1\n");
	} else {
		printf("2\n");
	}
	
}