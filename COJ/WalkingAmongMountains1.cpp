#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#define POS(x) ((x<0)?0:(x))
using namespace std;

int main(){
	int n, i, j, m[11][11], a[11][11], x, y;
	string aux;
	scanf("%d", &n);
	for(i=0; i < n; i++){
		cin >> aux;
		for(j=0; j < n; j++){
			a[i][j] = aux[j] - '0';
		}
	}
	scanf("%d %d", &x, &y);
	m[0][0] = 0;
	for(i=1; i < n; i++){
		m[i][0] = m[i-1][0] + POS(a[i][0] - a[i-1][0]);
		m[0][i] = m[0][i-1] + POS(a[0][i] - a[0][i-1]);
	}
	
	for(i=1; i < n; i++){
		for(j=1; j < n; j++){
			m[i][j] = min((m[i-1][j] + POS(a[i][j] - a[i-1][j])),(m[i][j-1] + POS(a[i][j] - a[i][j-1])));
		}
	}
	/*for(i=0; i < n; i++){
		for(j=0; j < n; j++){
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}*/
	printf("%d\n", m[x-1][y-1]);
}
