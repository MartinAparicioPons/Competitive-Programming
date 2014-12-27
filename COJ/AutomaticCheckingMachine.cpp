#include <bits/stdc++.h>
using namespace std;


int main(){
	int a[5], b[5], i;
	bool res;
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	cin >> b[0] >> b[1] >> b[2] >> b[3] >> b[4];
	for(res = true, i = 0; i < 5; i++){
		if(a[i] + b[i] != 1) res = false;
	}
	if(res) printf("Y\n");
	else 	printf("N\n");
}
