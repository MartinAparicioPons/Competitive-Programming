#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;


int main(){
	int n;
	cin >> n;
	vector<int> a;
	a.resize(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < n; i++){
		printf("%d\n",a[i]);
	}	
	
	
}