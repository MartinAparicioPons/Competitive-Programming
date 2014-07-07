#include <cstdio>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdlib>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define prc(c) printf("%c\n", c)
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) for(i = 0; i < n; i++)
#define _F first
#define _S second
#define _MP make_pair
using namespace std;

typedef pair<int, int> ii;
int main(){
	int k, i, j, n, x, y, count,
		d1[4]={1, 0, -1,  0},
		d2[4]={0, 1,  0, -1};
	char a[110][110], aa[110][110], b;
	bool vis[110][110]={false};
	queue<ii> q;
	ii m;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", a[i]);
		for(j = 0; j<n; j++){
			if(a[i][j] == 'R')
				aa[i][j] = 'G';
			else
				aa[i][j] = a[i][j];
		}
	}
	for(count=0, k = 0; k < n; k++){
		for(j = 0; j < n; j++){
			if(vis[k][j]) continue;
			q.push(_MP(k,j));
			vis[k][j] = true;
			count++;
			while(!q.empty()){
				m = q.front(); 
				q.pop();
				x = m._F;
				y = m._S;
			//	printf("| %d %d \n", x, y);
				b = a[x][y];
				for(i=0; i<4; i++){
					if((d2[i] + y >= 0) && (d2[i] + y < n) && (d1[i] + x >= 0) 
					&& (d1[i] + x < n) && !vis[d1[i]+x][d2[i]+y]){
						if(b == a[d1[i]+x][d2[i]+y]){
							q.push(_MP(d1[i]+x, d2[i]+y));
							vis[d1[i]+x][d2[i]+y] = true;
						}
					}
				}
			}
		}
	}
	printf("%d", count);
	memset(vis, false, sizeof(vis));
	for(count=0, k = 0; k < n; k++){
		for(j = 0; j < n; j++){
			if(vis[k][j]) continue;
			q.push(_MP(k,j));
			vis[k][j] = true;
			count++;
			while(!q.empty()){
				m = q.front(); 
				q.pop();
				x = m._F;
				y = m._S;
			//	printf("| %d %d \n", x, y);
				b = aa[x][y];
				for(i=0; i<4; i++){
					if((d2[i] + y >= 0) && (d2[i] + y < n) && (d1[i] + x >= 0)
								&& (d1[i] + x < n) && !vis[d1[i]+x][d2[i]+y]){
						if(b == aa[d1[i]+x][d2[i]+y]){
							q.push(_MP(d1[i]+x, d2[i]+y));
							vis[d1[i]+x][d2[i]+y] = true;
						}
					}
				}
			}
		}
	}
	printf(" %d\n", count);
}


