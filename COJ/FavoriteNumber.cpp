#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<set>
#include<cmath>
#define pow10(i) ((unsigned long long)pow(10.0,(double)i))
using namespace std;

//WA
 


int main(){
	int d1, c1, d2, c2, c3;
	unsigned long long n, a;
	cin >> n >> d1 >> c1 >> d2 >> c2;
	c3 = log(n);
	if (c2 + c1 == 0){
		printf("%llu", n);
	} else {
		if (c2 + c1 <= c3){
			a = 0;
			int i;
			if (d1 <= d2){
				for(i = 0; i < c1; i++)
					a += d1*pow10(i);
				//printf("a(%d)=%llu\n", i, a);
				for(int j = 0; j < c2; j++){
					a += d2*pow10(i);
					i++;
				}
			}
			if((a < n) || (d2 < d1)){
				a = 0;
				for(i = 0; i < c2; i++)
					a += d2*pow10(i);
				for(int j = 0; j < c1; j++){
					a += d1*pow10(i);
					i++;
				}
			}
			//printf("%llu\n", a);
			while(a < n){
				a += pow10(i);
				i++;
			}
			printf("%llu", a);
		} else {
			if (d1 < d2){
				for(int i = 0; i < c1; i++)
					printf("%d",d1);
				for(int i = 0; i < c2; i++)
					printf("%d",d2);
			} else {
				for(int i = 0; i < c2; i++)
					printf("%d",d2);
				for(int i = 0; i < c1; i++)
					printf("%d",d1);
			}
		}
	}
}
