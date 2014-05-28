#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int main(){
	vector<int> a;
	a.resize(0);
	a.resize(3);
	cin >> a[0] >> a[1] >> a[2];
	while ((a[0] != 0)&&(a[1] != 0)&&(a[2] != 0)){
		sort(a.begin(), a.end());
		if((a[0]*a[0] + a[1]*a[1]) == (a[2]*a[2]))
			printf("right\n");
		else
			printf("wrong\n");
		cin >> a[0] >> a[1] >> a[2];
	}
}