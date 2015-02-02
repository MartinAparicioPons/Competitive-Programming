#include <bits/stdc++.h>
using namespace std;

const int MAXN = 120;

int n, i, j, k, A[MAXN], M[MAXN][MAXN], K, mx[MAXN];
	
int main(){
	ios_base::sync_with_stdio(0);
	cin >> n >> K;
	for(i = 0; i < n; i++){
		cin >> A[i];
	}
	for(i = 0; i < n; i++){
		for(j = k = 0; j < A[i]; j++, k = (k+1)%K){
			M[i][k]++;
		}
	}
	
	for(k = 0; k < K; k++){
		for(i = 0; i < n; i++){
			for(j = 0; j < i; j++){
				if(abs(M[i][k] - M[j][k]) > 1){
					cout << "NO\n";
					return 0;
				}
			}
		}
	}
	
	cout << "YES\n";
	for(i = 0; i < n; i++){
		for(k = 0; k < K; k++){
			while(M[i][k]--) cout << k+1 << " ";
		}
		cout << endl;
	}
	
}
