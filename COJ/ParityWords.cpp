#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <utility>
using namespace std;

int main(){
	int t, ac, p;
	int s;
	cin >> t;
	getchar();
	while(t--){
		ac = 0;
		p = 0;
		while((s = getchar()) != 10){
			if (s % 2 == 0) p++;
			ac++;
		}
		if(p > (ac-p)) printf("Even\n");
		else printf("Odd\n");
	}

}
