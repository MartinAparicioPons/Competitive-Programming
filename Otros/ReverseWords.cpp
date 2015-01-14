#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <utility>
using namespace std;
//typedef long long tint;

int main () {
	int i, j, k;
	cin >> i;
	for(k = 1; k <= i; k++){
		string l[1001] = {""}, aux;
		j = 0;
		cin >> aux;
		for(;(aux[aux.length()-1] != '\n');){
			l[j++] = aux;
			cin >> aux;
		}
		l[j++] = aux;
		cout << "Case #" << k << ": ";
		for(;j--;){
			cout << l[j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}