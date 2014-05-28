#include <cstdio>
#include <iostream>
using namespace std;
typedef unsigned long long tint;

int main(){
	tint ret, n, t;
	cin >> t;
	while(t--){
		cin >> n;
		ret = 0;
		while(n){
			ret += n/5;
			n /= 5;
		}
//		cout << ret << endl;
		printf("%llu\n", ret);
	}
	
}
