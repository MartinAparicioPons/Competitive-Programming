#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main () {
	vector<int> vec;
	int n, m, t, aux, auxi;
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> n >> m;
		vec.resize(0);
		vec.resize(n);
		for (int j = 0; j < m; j++){
			for(int k = 0; k < n; k++){
				cin >> aux;
				vec[k] += aux;
			}
		}
		aux = 0;
		for (int j = 0; j < n; j++){
			if (aux < vec[j]){
				aux = vec[j];
				auxi = j;
			}
		}
		auxi++;
		cout << auxi << endl;
	}
}