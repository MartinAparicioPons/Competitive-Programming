#include <bits/stdc++.h>
using namespace std;

const int MAXN = 110;

int n, D[MAXN][MAXN], M[MAXN][MAXN];

void print(){
	int i, j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cerr << D[i][j] << "\t";
		}
		cerr << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	int T, i, j;
	cin >> T;
	while(T--){
		cin >> n;
		memset(D, 0, sizeof D);
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				cin >> M[i][j];
			}
		}
		
		for(i = n; i >= 0; i--){
			D[i][n] = D[n][i] = INT_MIN;
			if(i < n-1) {
				D[n-1][i] = D[n-1][i+1] + M[n-1][i];
				D[i][n-1] = D[i+1][n-1] + M[i][n-1];
			}
		}
		for(i = n-2; i >= 0; i--){
			for(j = n-2; j >= 0; j--){
				D[i][j] = max(D[i+1][j], D[i][j+1]) + M[i][j];
			}
		}
		
		long double r = D[0][0]*1.0;
		r /= (n+n-3.0)*1.0;
		if(r >= 0){
			printf("%.6Lf\n", r);
		} else {
			printf("No funds\n");
		}
	}
}

