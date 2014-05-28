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


int main() {
	int t, n, m, i;
	vector<int> v;
	cin >> t;
	for(;t--;){
		cin >> m >> n;
		v.clear();
		v.resize(n);
		for(i=0; i<n; i++){
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		for(i=0; i<n; i++){
			if(v[i]>m) break;
			m-=v[i];
		}
		printf("%d\n", i);
	}
}