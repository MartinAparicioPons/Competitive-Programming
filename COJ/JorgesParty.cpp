#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, i, j, a, b, v[1001]={0};
	queue<int> q;
	vector<int> r[1001];
	bool res = true;
	cin >> n >> m;
	for(i = 0; i < m; i++){
		cin >> a >> b;
		r[a].push_back(b);
		r[b].push_back(a);
	}
	for(i = 1; i <= n; i++){
		if(v[i]) continue;
		q.push(i);
		v[i] = 1;
		while(!q.empty()){
			a = q.front(); q.pop();
			for(j = 0; j < r[a].size(); j++){
				if(!v[r[a][j]]){
					q.push(r[a][j]);
					v[r[a][j]] = v[a] ^ 3;
				} 
				if(v[r[a][j]] == v[a]) res = false;
			}
		}
	}
	if(res) printf("YES\n");
	else 	printf("NO\n");
}
