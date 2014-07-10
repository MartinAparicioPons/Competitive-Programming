#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;


unsigned long long reverse(unsigned long long k1){
	unsigned long long aux = 0;
	while (k1 % 10 == 0) k1 /= 10;			//Limpio los ceros
	while (k1 > 0){
		aux += k1 % 10;
		aux *= 10;
		k1 /= 10;
	}
	while (aux % 10 == 0) aux /= 10;
	return aux;
}


int main(){
	unsigned long long n, i, k1, k2, ret;
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> k1 >> k2;
		k1 = reverse(k1);
		k2 = reverse(k2);
		ret = k1+k2;
		ret = reverse(ret);
		cout << ret << endl;
		
	}
	return 0;	
}