#include <bits/stdc++.h>
using namespace std;

const int MAXN = 50001;

int main(){
	int n, m, i, a, b, j, v[MAXN]={0}, R=0;
	queue<int> q;
	vector<int> acts, r[MAXN];
	bool res = true;
	cin >> n >> m;
	for(i = 0; i < m; i++){
		cin >> a >> b;
		r[a].push_back(b);
		r[b].push_back(a);
	}
	for(i = 1; i <= n; i++){
		if(v[i]) continue;
		if(r[i].size() == 0){
			v[i] = 1;
			R++;
			continue;
		}
		q.push(i);
		v[i] = 1;
		acts.clear();
		acts.push_back(i);
		while(!q.empty()){
			a = q.front(); q.pop();
			for(j = 0; j < r[a].size(); j++){
				b = r[a][j];
				if(!v[b]){
					q.push(b);
					v[b] = v[a] ^ 3;
					acts.push_back(b);
				} 
				if(v[b] == v[a]) res = false;
			}
		}
		for(j = a = b = 0; j < acts.size(); j++){
			a += v[acts[j]] == 1;
			b += v[acts[j]] == 2;
		}
		R += max(a,b);
	}
	if(res){
		printf("%d\n", R);
	} else {
		printf("-1\n");
	}
}
