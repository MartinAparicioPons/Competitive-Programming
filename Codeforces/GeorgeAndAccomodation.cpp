#include <bits/stdc++.h>
#define for0(i, n) for(i = 0; i < n; i++)
#define fora(i, n, a) for(i = a; i < n; i++)
using namespace std;



int main() {
	int a, b, n, i, r=0;
	cin >> n;
	for0(i, n){
		cin >> a >> b;
		if(a+1 < b) r++;
	}
	cout << r << endl;
}
