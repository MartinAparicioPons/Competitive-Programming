#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
#define NO(x) ((x==1)?0:1)
using namespace std;

int main(){
	int X[100], Y[100];
	int x, y, i, n, ac;
	cin >> x;
	memset(X, -1, sizeof(X));
	for(i=0;x!=0;i++){
		X[i] = x%2;
		x/=2;
	}
	n = i-1;
	Y[n] = X[n];
	for(i = n-1; i >= 0; i--){
		if(Y[i+1] == 0){
			Y[i] = X[i+1];
		} else {
			Y[i] = NO(X[i+1]);
		}
		//cout << X[i+1];
	}
	y=0;
	ac = 1;
	for(i = 0; i <= n; i++){
		y += Y[i]*ac;
		ac*=2;
	}
	printf("%d\n", y);
}