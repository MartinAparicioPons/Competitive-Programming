#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<set>
#include<cmath>
using namespace std;


int main(){
	string a, b;
	int n, i, j, k, f;
	cin >> n;
	for(;n--;){
		cin >> a >> i;
		b = "";
		j = a.size();
		i %= j;
		for(f = j-i; f < j; f++)
			b+=a[f];
		for(f = 0; f < j-i; f++)
			b+=a[f];
		
		//a.copy(b, i, j-i);
		//a.copy(b+i, j-i, 0);
		cout << b << endl;
	}
}