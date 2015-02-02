#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200;

int main(){
	ios_base::sync_with_stdio(0);
	int n, i, j, A[MAXN][MAXN];
	cin >> n;
	for(i = 0; i < MAXN; i++)
		for(j = 0; j < MAXN; j++)
			A[i][j] = 1;
	for(i = 1; i < MAXN; i++)
		for(j = 1; j < MAXN; j++)
			A[i][j] = A[i-1][j] + A[i][j-1];
			
	cout << A[n-1][n-1] << endl;
}
