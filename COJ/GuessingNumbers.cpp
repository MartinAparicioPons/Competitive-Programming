#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
using namespace std;

int main(){
	int n, i=0;
	cin >> n;
	for(int k = n;k>0;k/=2){
		i++;
	}
	if((n==1))
		cout << 1;
	else
		cout << ceil(i);
}