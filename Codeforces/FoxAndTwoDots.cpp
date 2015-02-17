#include <bits/stdc++.h>
using namespace std;

const int MAXN = 55;
typedef pair<pair<int,int>,int> iii;
#define F first.first
#define S first.second
#define T second 

char M[MAXN][MAXN];
int n, m, p[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

bool dfs(int i, int j){
	bool V[MAXN][MAXN] = {false};
	stack<iii> q;
	q.push({{i,j},1});
	int r = 1, k;
	while(!q.empty()){
		iii a = q.top(); q.pop();
		if(V[a.F][a.S]) continue;
		V[a.F][a.S] = true;
		for(k = 0; k < 4; k++){
			iii b = {{a.F+p[k][0], a.S+p[k][1]}, a.T+1};
			if(b.F == i && b.S == j){
				r = max(r, b.T);
			}
			if(M[b.F][b.S] == M[i][j] && !V[b.F][b.S]){
				q.push(b);
			}
		}
	}
	return r >= 4;
}

int main(){
	ios_base::sync_with_stdio(0);
	int i, j;
	cin >> n >> m;
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin >> M[i][j];
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(dfs(i, j)){
				cout << "Yes\n";
				return 0;
			}
		}
	}
	cout << "No\n";
	return 0;
}
