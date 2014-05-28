#include <set>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iterator>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;


int main() {
	int r, n, aux, i;
	bool b;
	set<int> in;
	for(;cin >> r >> n;){
		b = true;
		in.clear();
		for(i=0;i<n;i++){
			cin >> aux;
			in.insert(aux);
		}
		for(i = 1; i <= r; i++){
			if(in.find(i) == in.end()){
				printf("%d ", i);
				b=false;
			}
		}
		if (b) printf("*");
		printf("\n");
	}
	
}