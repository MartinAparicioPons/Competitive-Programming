#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;
typedef long long unsigned tint;

int main(){
	tint n, m, res=0, a=1;
	cin >> n >> m;
	while((n%2 == 1) && (m%2 == 1)){
		res+=a;
		a*=4;
		n = (n-1)/2;
		m = (m-1)/2;
	}
	cout << res;
}