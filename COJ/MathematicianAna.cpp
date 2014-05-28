#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;


int main(){
	int t, ac=0;
	unsigned long long n;
	cin >> t;
	for(;t--;){
		cin >> n;
		for(;n!=0;n/=2){
			if(n%2==1) ac++;
		}
	}
	printf("%d\n",ac);
}