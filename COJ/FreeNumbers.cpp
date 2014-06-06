#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<map>
#include<iterator>
#include<string>
#include<cstring>
using namespace std;
typedef unsigned long long tint;

bool coprime (tint a, tint b){
	for(;;){
		if(!(a%=b)) return b == 1;
		if(!(b%=a)) return a == 1;
	}
}

int main(){
	tint a, b;	
	while(scanf("%llu %llu", &a, &b) != EOF){
		if (coprime(a, b))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
