#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iterator>
#include <numeric>
#include <iostream>
#include <string>
using namespace std;
typedef unsigned long long tint;

vector <int> v;

tint cuantoLevanta(){
	tint res, max;
	max = accumulate(v.begin(),v.end(),0);
	max /= 3;
	for(vector<int>::iterator j=v.begin();j!=v.end();j++)
		if(*j < max);
}

int main() {
	int t, n, i;
	tint aux, max;
	cin >> t;
	for(;t--;){
		max = 0;
		cin >> n;
		v.resize(n);
		for(i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		for(i = 0; i < n; i++){
			aux = cuantoLevanta();
			if (aux>max) max = aux;
			v.erase(i);
		}
	}
}