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
#define MAX 4000000
#define sq(x) ((x)*(x))
using namespace std;

typedef unsigned long long tint;
tint es_primo[MAX+1];


void pre(){
	tint i, j, u, k=0;
	for (i=2; i<MAX; i++){
		for (j=2; j*j<=i; j++){
			if (i % j == 0) 
				break;
			else if (sq(j+1) > i) {
				es_primo[k++] = i;
				//if (i < 100)cout << i << " es primo.\n";
			}
		}	
	}
	
	es_primo[2] = true;
	es_primo[3] = true;
	for(i=2; i < MAX; i++){
		for (u=2; u < i; u++){
			if ((es_primo[u]) && (i%u == 0)){
				//S[u].insert(i);
				S[i].insert(u);
				//if (i < 50)cout << "debug:	" << i << " " << u << "\n";
			}
		}
	}
	return;
}

int main(){
	tint n, A;
	pre();
	bool b = true;
	cin >> n;
	for(;n--;){
		cin >> A;
		if (S[A].size() < 3)
			b = false;
		//cout << b << " " << S[A].size() << "\t";
	}
	if (b) printf("YES");
	else printf("NO");
}
