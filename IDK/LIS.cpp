#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef int tint;

tint n, v[1002], seq[1002], ant[1002];

tint LIS(){
	tint res = 0, i, j;
	for (i = 0; i < n; i++) {
		seq[i] = 1;
		ant[i] = -1;
		for (j = 0; j < i; j++){
			if ((v[j] < v[i]) && (seq[i] < seq[j] + 1)) {
				seq[i] = seq[j] + 1;
				ant[i] = j;
			}
		}
		if(seq[res] < seq[i]){
			res=i;
		}
	}
	return res;
}

int main(){
	tint k, i;
	cin >> k;
	for(;k--;){
		cin >> n;
		for(i=0;i<n;i++){
			cin >> v[i];
			ant[i]=-1;
			seq[i]=0;
		}
		i = LIS();
		printf("%d\n", seq[i]);
		//for(i=0;i<n;i++) printf("%d ", seq[i]); printf("\n");
	}
}