#include <bits/stdc++.h>
using namespace std;

const int MAX = 100010;

int main(){
	int i, j, p[4], x, y, X[3], Y[3];
	cin >> p[1] >> p[2] >> p[3];
	p[0] = 0;
	for(i = 0; i < 3; i++){
		cin >> X[i] >> Y[i];
	}
	for(i = x = y = 0; i < 110; i++){
		for(j = 0; j < 3; j++){
			if(X[j] == i) x++;
			if(Y[j] == i) x--;
		}
		y+=x*p[x];
	}
	cout << y << endl;
}
