#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
	int k, t, i, j, n;
	cin >> t;
	for(k=1;k<=t;k++){
		cin >> n;
		int v[202][202]={0}, aux[202][202]={0};
		for(i=0; i<n; i++){
			for(j=0; j<=i; j++){
				cin >> v[i][j];
			}
		}
		for(i=n; i<(2*n-1); i++){
			for(j=0; j<=(2*n-2)-i; j++){
				cin >> v[i][j];
			}
		}
		///for(i=0; i < 2*n-1; i++) for(j=0; j <= n; j++) cout << v[i][j] << " ";
		aux[(2*n-2)][0] = v[(2*n-2)][0];
		for(i=(2*n-3);i>=n-1;i--){
			for(j=0;j<=(2*n-i);j++){
				if(j!=0)
					aux[i][j] = max(aux[i+1][j], aux[i+1][j-1]) + v[i][j];
				else
					aux[i][j] = aux[i+1][j] + v[i][j];
			}
		}
		for(i=n-2;i>=0;i--){
			for(j=0;j<=i;j++){
				aux[i][j] = max(aux[i+1][j], aux[i+1][j+1]) + v[i][j];
			}
		}
		printf("Case %d: %d\n", k, aux[0][0]);
	}
}