#include <bits/stdc++.h>
using namespace std;

const int MAXN = 340;
int n, A[MAXN];
bool M[MAXN][MAXN], vis[MAXN];

int main() {
	ios_base::sync_with_stdio(0);
	int i, j, r;
	char c;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> A[i];
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cin >> c;
			M[i][j] = c == '1';
		}
	}
	
	queue<int> q;
	for(i = 0; i < n; i++){
		if(vis[i]) continue;
		vis[i] = true;
		q.push(i);
		map<int, int> cc, icc;
		while(!q.empty()){
			r = q.front(); q.pop();
			cc[A[r]] = r;
			icc[r] = A[r];
			for(j = 0; j < n; j++){
				if(M[r][j] && !vis[j]){
					vis[j] = true;
					q.push(j);
				}
			}
		}
		for(map<int, int>::iterator it = cc.begin(), it2 = icc.begin(); it != cc.end(); it++, it2++){
			A[it2->first] = it->first;
		}
	}
	for(i = 0; i < n; i++){
		cout << A[i] << " \n"[i == n-1];
	}
}
