#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 110;

int H[MAXN][MAXN], n, m, 
	M[8][2]={{1,1} ,{1,0} ,{0,1} ,{-1,-1},
			 {-1,1},{1,-1},{-1,0},{0,-1}};

bool is_valid(int a, int b){
	int i, j, k;
	for(k = 0; k < 8; k++){
		i = a + M[k][0]; j = b + M[k][1];
		if(i < 0 || j < 0 || i >= n || j >= m) continue;
		if(H[i][j] == H[a][b]) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	int t, i, j;
	set<int> I;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				cin >> H[i][j];
			}
		}
		for(i = 0; i < n; i++){
			for(j = 0; j < m; j++){
				if(H[i][j] < 0) continue;
				if(!is_valid(i, j)) I.insert(H[i][j]);
			}
		}
		
		cout << I.size() << endl;
		I.clear();
	}
}
