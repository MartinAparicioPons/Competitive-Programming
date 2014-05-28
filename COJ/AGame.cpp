#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstring>
#include <utility>
using namespace std;
int n, k, par=0, imp=0, c;
void swp(){
	int aux;
	aux = par;
	par = imp;
	imp = aux;
}
int main(){
	cin >> n;
	for(k = 0; k < n; k++){
		cin >> c;
		if (k % 2 == 0){
			par+=c;
		} else {
			imp+=c;
		}
	}
	if (par < imp) swp();
	printf("%d %d", par, imp);
}
