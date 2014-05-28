#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;

int main(){
	int n, m, a;
	bool ma, b;
	cin >> n;
	printf("Lumberjacks:\n");
	while(n--){
		b = true;
		cin >> m >> a;
		if (m > a)
			ma = false;
		else
			ma = true;
		for (int i = 2; i < 10; i++){
			cin >> m;
			if((m < a) && (ma))
				b = false;
			if((m > a) && (!ma))
				b = false;
			a = m;
		}
		(b)?printf("Ordered\n"):printf("Unordered\n");
	}
}