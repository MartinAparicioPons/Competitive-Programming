#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;


int main(){
	char a[101], b[101];
	int i, j, la, count;
	scanf("%s", a);
	while(a[0] != 'X'){
		scanf("%s", b);
		la = strlen(a);
		count = 0;
		for(i = 0; i < la; i++){
			if (a[i] != b[i])
				count++;
		}
		printf("Hamming distance is %d.\n", count);
		scanf("%s", a);
	}
}
