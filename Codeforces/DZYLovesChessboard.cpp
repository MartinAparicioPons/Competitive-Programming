#include <cstdio>
#include <cctype>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <cstring>
#include <cstdlib>
#include <locale>
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
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define _TL(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define _TU(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef pair<int, ii> iii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;

int n , m;

bool valid(int i, int j){
	return ((i >= 0) && (i < n) && (j < m) && (j >= 0));
}

int main(){
	char a[105][105] = {'-'};
	bool vis[105][105] = {false}, ok;
	queue<ii> q;
	ii p;
	int i, j, x, y;
	scd2(n, m);
	for(i=0; i<n; i++){
		scanf("%s", a[i]);
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(vis[i][j] || (a[i][j] == '-')) continue;
			q.push(_MP(i, j));
			vis[i][j] = true;
			while(!q.empty()){
				p = q.front(); q.pop();
				x = p._F;
				y = p._S;
				ok = false;
				//printf("|| %d %d %c\n", x, y, a[x][y]);
				if(a[x][y] == '.'){
					if((a[x+1][y] != 'B') && (a[x][y+1] != 'B')){
						if(valid(x-1, y) && (a[x-1][y] != 'B')){
							if(valid(x, y-1) && (a[x][y-1] != 'B')){
								a[x][y] = 'B';
								ok = true;
							}
						} else if(!valid(x-1, y) && valid(x, y-1) && (a[x][y-1] != 'B')){
							a[x][y] = 'B';
							ok = true;
						} else if(!valid(x-1, y) && !valid(x, y-1)){
							a[x][y] = 'B';
							ok = true;
						} else {
							a[x][y] = 'W';
							ok = true;
						}
					}
					if(!ok && (a[x+1][y] != 'W') && (a[x][y+1] != 'W')){
						if(valid(x-1, y) && (a[x-1][y] != 'W')){
							if(valid(x, y-1) && (a[x][y-1] != 'W')){
								a[x][y] = 'W';
								ok = true;
							}
						} else if(!valid(x-1, y) && valid(x, y-1) && (a[x][y-1] != 'W')){
							a[x][y] = 'W';
							ok = true;
						} else if(!valid(x-1, y) && !valid(x, y-1)){
							a[x][y] = 'W';
							ok = true;
						} else {
							a[x][y] = 'B';
							ok = true;
						}
					} else if (!ok){
						a[x][y] = 'B';
						ok = true;
					}
					if(!ok){
						a[x][y] = 'W';
						ok = true;						
					}
				}
				if(valid(x+1, y)&& (a[x+1][y] == '.') &&!vis[x+1][y]){
					vis[1+x][y] = true;
					q.push(_MP(1+x, y));
				}
				if(valid(x, y+1) && (a[x][y+1] == '.') &&!vis[x][y+1]){
					vis[x][y+1] = true;
					q.push(_MP(x, y+1));
				}
				if(valid(x-1, y)&& (a[x-1][y] == '.') &&!vis[x-1][y]){
					vis[x-1][y] = true;
					q.push(_MP(x-1, y));
				}
				if(valid(x, y-1) && (a[x][y-1] == '.') &&!vis[x][y-1]){
					vis[x][y-1] = true;
					q.push(_MP(x, y-1));
				}
			}
		}
	}
	
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
	
}








