#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
	char c;
	int n, i, j, f;
	cin >> f >> n;
	for(i=0;i < f;i++){
		switch (i % 3) {
			case 0: c = 'O'; break;
			case 1: c = 'I'; break;
			case 2: c = 'E'; break;
		}
		for(j=0; j< n; j++){
			printf("%c", c);
			switch (c) {
				case 'O': c = 'I'; break;
				case 'I': c = 'E'; break;
				case 'E': c = 'O'; break;
			}
		}
		printf("\n");
	}
}