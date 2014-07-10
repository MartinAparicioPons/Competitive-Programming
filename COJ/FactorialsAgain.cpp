#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

long pre[6];

void preprocessing(){
	pre[1] = 1;
	pre[2] = 2;
	pre[3] = 6;
	pre[4] = 24;
	pre[5] = 120;	
}
int main(){
	preprocessing();
	int n, i, j;
	cin >> n;
	while(n != 0){
		i = 0;
		j = 1;
		while(n != 0){
			i += (n % 10) * pre[j];
			j++;
			n /= 10;
		}
		printf("%d\n", i);
		cin >> n;
	}
}
