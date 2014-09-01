#include <stdio.h>
#include <iostream>
#define MAX 30000
using namespace std;
typedef unsigned long long tint;

int main(){
	tint vec[]={4,7,47,74,44,77,444,447,474,744,777,774,747,477}, i, j=1 ,n;
	cin >> n;
	for(i=0; i < 14; i++){
		if(n%vec[i]==0){
			printf("YES\n");
			j=2;
			break;
		}
	}
	if(j!=2) printf("NO\n");
}
