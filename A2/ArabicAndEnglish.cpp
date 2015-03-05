#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 110;

int main(){
	ios_base::sync_with_stdio(0);
	int t, n, i, k, B[MAXN];
	bool A[MAXN];
	string S[MAXN];
	cin >> t;
	while(t--){
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> S[i];
			A[i] = S[i][0] == '#';
		}
		i = k = 0;
		while(i < n){
			B[k++] = i;
			while(i < n && A[i] == A[B[k-1]]) i++;
		}
		B[k] = n;
		while(k--){
			for(i = B[k]; i < B[k+1]; i++){
				cout << S[i] << " ";
			}
		}
		cout << endl;
	}
	
}
