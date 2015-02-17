#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100010, MAXK = 11;

long long A[MAXN], RSQ[MAXK][MAXN];

int main(){
	ios_base::sync_with_stdio(0);
	int T, i, j, x, y, k;
	bool P[MAXN];
	for(i = 0; i < MAXN; i++){
		P[i] = true;
	}
	for(i = 2; i < MAXN; i++){
		if(P[i]){
			for(j = i; j < MAXN; j += i){
				P[j] = false;
				A[j]++;
			}
		}
	}
	for(i = 2; i < MAXN; i++){
		RSQ[A[i]][i]++;
	}
	for(j = 1; j < MAXK; j++){
		for(i = 2; i < MAXN; i++){
			RSQ[j][i]+=RSQ[j][i-1];
		}
	}
	cin >> T;
	while(T--) {
		cin >> x >> y >> k;
		cout << RSQ[k][y] - RSQ[k][x-1] << endl;
	}
}
