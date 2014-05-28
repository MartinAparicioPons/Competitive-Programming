#include <set>
#include <iterator>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <iostream>
typedef unsigned long long tint;
using namespace std;

void init (tint *m, tint *sm, tint n){
	sm[0] = 0;
	for(tint i=1; i<=n; i++){
		sm[i] = sm[i-1]+m[i-1];
	}
}

tint query(tint *sm, tint a, tint b){
	return sm[b] - sm[a];
}


int main () {
	tint t, n, q, i, j, b, ii, jj;
	cin >> t;
	for(;t--;){
		cin >> n >> q;
		tint arr[n], sm[n];
		for(i = 0; i < n; i++){
			cin >> arr[i];
		}
		init(arr, sm, n);
		for(i=0; i<q; i++){
			cin >> ii >> jj;
			cout << query(sm, ii, jj+1) << "\n";
		}
		if(t!=0)printf("\n");
	}
}