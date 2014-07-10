#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<set>
#include<cmath>
using namespace std;


int main(){
	unsigned long long n, aux;
	cin >> n;
	while(n!=0){
		aux = (unsigned long long)sqrt(2*n);
		//cout << aux;
		if(((aux*(aux+1))/2) == n)
			printf("YES\n");
		else
			printf("NO\n");
		cin >> n;
	}
}