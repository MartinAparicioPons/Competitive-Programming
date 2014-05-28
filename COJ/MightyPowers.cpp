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
using namespace std;
typedef unsigned long long tint;

//WA

int main(){
	int n;
	tint aux, po;
	vector<tint> S;
	cin >> n >> po;
	for(;n--;){
		cin >> aux;
		S.insert(aux);
	}
	sort(S.begin(), S.end());
	/*
	itr = S.upper_bound(po);
	for(;itr != S.end();){
		S.erase(*itr);
		itr = S.upper_bound(po);
	}*/
	
	tint aux=0, ac=0;
	while(i=0; i<S.size(); i++){
		aux = S[i];
		ac+=aux;
		for(itr = S.begin(); itr != S.size(); itr++){
			
		}
	
}
