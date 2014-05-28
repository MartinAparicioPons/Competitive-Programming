#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <utility>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <set>
using namespace std;

typedef unsigned long long tint;

int main(){
	tint n, k, c, ac=0;
	vector<tint> C;
	cin >> n >> k;
	C.resize(n);
	for(int i=0;i<n; i++){
		cin >> C[i];
	}
	sort(C.begin(), C.end());
	c=0;
	for(int i = n-1; i >= 0; i--){
		if(c < k){
			c+=C[i];
			ac++;
			//cout << "D: " << c << "  " << ac << endl;
		}else
			break;
	}
	if(c < k){
		printf("IMPOSSIBLE");
	} else {
		printf("%llu",ac);
	}
}
