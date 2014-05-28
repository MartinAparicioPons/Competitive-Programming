#include <cstdio>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <set>
#include <iterator>
#include <iostream>
#define MAX 100000010
using namespace std;
typedef unsigned long long int tint;

set<tint> c, d;
set<tint>::iterator it, it2;

void pre(){
	int i;
	d.insert(0);
	d.insert(1);
	for(i = 4; i*i < MAX; i++){
		c.insert(i*i);
	}
	for(i = 4; i*i < MAX; i++){
		if(c.find(i*i*i) != c.end())
			d.insert(i*i*i);
	}
	return;
}

int main () {
	pre();
	int a, b, i;
	for(;cin >> a >> b;){
		it = d.lower_bound(a);
		it2 = d.lower_bound(b);
		for(i = 0;it != it2; it++) {
		//	printf("$%llu\n", *it);
			i++;
		}
		if(*it2 == b) i++;
		printf("%d\n", i);
	}
}