#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1010;
bool M[MAXN][MAXN];
	
int main() {
	ios_base::sync_with_stdio(0);
	int n, m, k, i, j, x, y;
	int a, b, c, R = 0;
	cin >> n >> m >> k;
	for(i = 0; i < k; i++){
		cin >> x >> y;
		M[x][y] = true;
		if(!R){
			if(M[x-1][y-1] && M[x-1][y] && M[x][y-1]) R = i+1;
			if(M[x+1][y-1] && M[x+1][y] && M[x][y-1]) R = i+1;
			if(M[x-1][y+1] && M[x-1][y] && M[x][y+1]) R = i+1;
			if(M[x+1][y+1] && M[x+1][y] && M[x][y+1]) R = i+1;
		}
	}
	cout << R << endl;
}
