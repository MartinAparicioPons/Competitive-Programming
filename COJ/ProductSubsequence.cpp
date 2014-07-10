#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main () {
	unsigned long long tot;
	long t, a, b;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> a >> b;
		tot = 0;
		for(int j = a; j <= b; j++){
			tot += (j*(j+1)*(j+2))%100;
		}
		cout << (tot % 100) << endl;
	}
}