#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, n, i, j;
	char b3[1000];
	cin >> T;
	for(;T--;){
		cin >> n;
		i = 0;
		while(n){
			b3[i++] = n%3;
			n/=3;
		}
		b3[i] = 0;
		for(j = 0; j < i; j++){
			if(b3[j] == 2){
				b3[j] = -1;
				b3[j+1]++;
			} else if(b3[j] == 3){
				b3[j] = 0;
				b3[j+1]++;
			}
		}
		if(b3[i]) printf("+");
		for(j = i-1; j >= 0; j--){
			if(b3[j] == -1){
				printf("-");
			}
			if(b3[j] == 0){
				printf("0");
			}
			if(b3[j] == 1){
				printf("+");
			}
		}
		printf("\n");
	}
}
