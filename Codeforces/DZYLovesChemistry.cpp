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
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;


int main(){
	int n, i, j, x, y, m, a[60][60]={-1};
	ll r=1;
	bool vis[60] = {false};
	queue<int> q;
	scd2(n, m);
	for0(i, m){
		scd2(x, y);
		a[x][y] = 1;
		a[y][x] = 1;
	}
	for(i = 1; i <= n; i++){
		if(vis[i]) continue;
		vis[i] = true;
		q.push(i);
		while(!q.empty()){
			x = q.front(); q.pop();
			for(j=1; j < 51; j++){
				if((a[x][j] == 1) && !vis[j]){
					vis[j] = true;
					r*=2;
					q.push(j);
				}
			}
		}
	}
	cout << r << endl;
	
}








