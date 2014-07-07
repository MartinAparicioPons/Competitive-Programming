#include <cstdio>
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
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<iii> viii;

bool cmp(iii a, iii b){
	if(a._S._F == b._S._F){
		return(a._S._S < b._S._S);
	}
	return(a._S._F < b._S._F);
}

int main(){	int t;
	int m, n, a, b, i, j, r, aux;
	viii adj, res;
	ii p;
	while(scd2(m, n) != EOF){
		queue<int> q;
		queue<ii> w[100010];
		adj.clear();
		res.clear();
		for(i = 0; i < m; i++){
			scd(r);
			for0(j, r){
				scd(a);
				q.push(a);
			}
			for0(j, r){
				scd(a);
				adj.push_back(_MP(a, _MP(i+1, q.front())));
				q.pop();
			}
		}
		b = adj.size();
		for(i = 0; i < b; i++){
			res.push_back(_MP(adj[i]._F, _MP(adj[i]._S._S, adj[i]._S._F)));
		}
		sort(res.begin(), res.end(), cmp);
		//for0(i, b)printf("%d: %d,%d | ", res[i]._F, res[i]._S._F, res[i]._S._S);
		prd2(n, m);
		for0(i, b){
			w[res[i]._S._F].push(_MP(res[i]._F, res[i]._S._S));
		}
		for(i = 1; i <= n; i++){
			aux = w[i].size();
			if(aux > 0){
				printf("%d ", aux);
				for(j = 0; j < aux-1; j++){
					p = w[i].front(); w[i].pop();
					printf("%d ", p._S);
					w[i].push(p);
				}
				p = w[i].front(); w[i].pop();
				printf("%d\n", p._S);
				w[i].push(p);
				for(j = 0; j < aux-1; j++){
					p = w[i].front(); w[i].pop();
					printf("%d ", p._F);
				}
				p = w[i].front(); w[i].pop();
				printf("%d\n", p._F);
			} else {
				printf("0\n\n");
			}
		}
	}
}
