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
#include <sstream>
#include <cstdlib>
#include <locale>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define dprd(x) printf("|| %d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define dprd2(x,y) printf("||%d | %d\n", x,y)
#define prnl() printf("\n")
#define prc(c) printf("%c\n", c)
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) fora(i, 0, n)
#define for1(i,n) for(i = 1; i <= n; i++)
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define _TL(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define _TU(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define _BS(v, x) binary_search(v.begin(), v.end(), x)
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;

vi   a[105];
bool p[105], vis[105];

int bfs(int u, int v){
	queue<int> q;
	memset(vis, false, 104);
	int ac=0, i, k;
	q.push(v);
	while(!q.empty()){
		v = q.front(); q.pop();
		vis[v] = true;
		if(p[v]) ac++;
		if(u == 0){
			if(!p[v])
				p[v] = true;
			else
				p[v] = false;
		}
		for(i = 0, k = a[v].size(); i<k; i++){
			if(!vis[a[v][i]]){
				q.push(a[v][i]);
				vis[v] = true;
			}
		}
	}
	return ac;
}

int main(){
	int n, q, i, j, u, v, k;
	while(scd2(n, q) != EOF){
		for0(i, 105){
			a[i].clear();
			p[i]=false;
		}
		for0(i, n-1){
			scd2(u, v);
			a[u].push_back(v);
		}
		for0(i, q){
			scd2(u, v);
			if(u == 0){
				bfs(u, v);
			} else {
				printf("%d\n", bfs(u, v));
			}
		}
	}
}






