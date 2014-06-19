#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <functional>
#include <vector>
#include <cmath>
#include <cstring>
#include <string>
#define _2(n) (1<<(n))
using namespace std;
typedef long long tint;

int main(){
	int h, b, j, i, a, aux;
	while(scanf("%d %d", &h, &b) != EOF, ((h != 0) && (b != 0))){
		vector<int> v;
		for(i = 0; i < b; i++){
			scanf("%d", &a);
			v.push_back(a);
		}
		aux = h - v[0];
		for(i = 1; i < b; i++){
			if(v[i] < v[i-1]){
				aux += v[i-1] - v[i];
			}
		}
		printf("%d\n", aux);
	}
}
