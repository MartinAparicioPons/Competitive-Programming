#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2010;


int T, n, m, D[MAXN][MAXN], i, j;
string a, b;

int main(){
	ios_base::sync_with_stdio(0);
	cin >> T;
	while(T--){
		cin >> a >> b;
		n = a.size(); m = b.size();
		for(i = 0; i <= max(n, m); i++){
			D[i][0] = i;
			D[0][i] = i;
		}
		for(i = 1; i <= n; i++){
			for(j = 1; j <= m; j++){
				if(a[i-1] == b[j-1]) D[i][j] = D[i-1][j-1];
				else D[i][j] = min(min(D[i-1][j], D[i][j-1]), D[i-1][j-1]) + 1;
			}
		}
		cout << D[n][m] << endl;
	}
}
