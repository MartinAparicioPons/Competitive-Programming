#include <bits/stdc++.h>
#define for0(i, n) for(i = 0; i < n; i++)
#define fora(i, n, a) for(i = a; i < n; i++)
using namespace std;



int main() {
	unsigned int n, m, k, i, j, r=0, a[1010], l, p;
	cin >> n >> m >> k;
	m++;
	for0(i, m){
		cin >> a[i];
	}
	for0(i, (m-1)){
		j = (a[i]^a[m-1]);
		//cout << a[i] << " | " << a[m-1] << endl;
		p = 0;
		for(l = 0; l < n; l++, j/=2){
			if(j%2 == 0) p++;
			//cout << j%2;
		}
		//cout << "| " << p << " . \n";
		if(p >= (n-k)) r++;
	}
	cout << r << endl;
}
