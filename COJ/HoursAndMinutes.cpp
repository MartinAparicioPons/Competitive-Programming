#include <iostream>
#include <cstdio>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
	int d;
	while(scanf("%d", &d) != EOF){
		if(d%6){
			printf("N\n");
		} else {
			printf("Y\n");
		}
	}
}
