#include <cstdio>
#include <iostream>
using namespace std;
//typedef unsigned long long tint;

int main(){
	int n, t, i, p, arr[2005], res;
	scanf("%d", &t);
	for(;t--;){
		res = -3000;
		for(i=0;i<2003;i++)
			arr[i] = 0;
		scanf("%d", &n);
		for(i=0;i<n;i++){
			scanf("%d", &p);
			arr[p+1000]++;
			if(arr[p+1000] > n/2){
				res = p;
			}
		}
		if(res != -3000)
			printf("YES %d\n", res);
		else
			printf("NO\n");
	}
	
}
