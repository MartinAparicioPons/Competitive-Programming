#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <map>
#include <cmath>
#include <utility>
#include <iterator>
#include <cstdlib>
#include <set>
#define MAX 40000
#define sq(x) ((x)*(x))
using namespace std;

//WA


typedef unsigned long long tint;
set<tint> S;


void pre(){
	tint i, j;
	for (i=3; i<MAX; i+=2){
		for (j=2; j*j<=i; j++){
			if (i % j == 0) 
				break;
			else if (sq(j+1) > i) {
				S.insert(i);
				//if (i < 100)cout << i << " es primo.\n";
			}
		}	
	}
	S.insert(3);
	S.insert(2);
	return;
}

int main(){
	tint n;
	pre();
	for(;cin >> n;){
		printf("%llu\n", *S.lower_bound(n));
	}
}
