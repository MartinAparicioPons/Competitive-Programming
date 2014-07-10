#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;

int main(){
	int t, n; 
	char c;
	long long int a, b;
	cin >> t;
	while(t--){
		cin >> b >> n;
		for(int i = 0; i<n; i++){
			cin >> c >> a;
			if (c == 'D') a *= -1;
			b+=a;
		}
		printf("%lld\n", b);
	}
}