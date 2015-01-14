#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second

const int MAXN = 102, MAXK=10010;

int main(){
	int f[MAXN][MAXN] = {0}, mov[4][2]={{-1, 0},{1, 0},{0, -1},{0, 1}};
	int i, j, n, m, k, r, c, act, mx = -1;
	pair<int, int> s[MAXK], l, p;
	queue< pair<int, int> > q;
	cin >> n >> m >> k;
	for(i = 0; i < k; i++){
		cin >> r >> c;
		f[r][c] = 1;
		s[i] = make_pair(r, c);
	}
	for(i = 0; i < k; i++){
		if(f[s[i].x][s[i].y] != 1) continue;
		q.push(s[i]);
		act = 0;
		while(!q.empty()){
			l = q.front(); q.pop();
			//printf("act: %d, x: %d, y: %d\n", act, l.x, l.y);
			f[l.x][l.y] = 2;
			act++;
			for(j = 0; j < 4; j++){
				p.x = l.x + mov[j][0];
				p.y = l.y + mov[j][1];
				if(f[p.x][p.y] == 1){
					q.push(p);
					f[p.x][p.y] = 2;
				}
			}
		}
		mx = max(act, mx);
	}
	/*
	for(i = 0; i <= n; i++){
		for(j = 0; j <= m; j++){
			cout << f[i][j] << " ";
		}
		cout << endl;
	}*/
	cout << mx << endl;
}
