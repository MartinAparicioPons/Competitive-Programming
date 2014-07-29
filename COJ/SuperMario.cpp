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
#define SQ(x) ((x)*(x))
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
	int a, x, y, i, j, n, 
		mx[4]={0,1,0,-1},
		my[4]={1,0,-1,0},
		m[15][15],
		d[15][15];
	string s;
	bool vis[15][15];
	memset(vis, true, sizeof vis);
	memset(d, 100, sizeof d);
	memset(m, -1, sizeof m);
	ii p, f, k;
	scd(n);
	for(i = 1; i <= n; i++){
		cin >> s;
		for(j = 1; j <= n; j++){
			vis[i][j] = false;
			if(s[j-1] == '.') m[i][j] = 0;
			else if(s[j-1] == 'm'){
				p = _MP(i, j);
				m[i][j] = 1;
			} else if(s[j-1] == '#'){
				f = _MP(i, j);
				m[i][j] = 2;
			}
			//printf("%4d", m[i][j]);
		}
		//prnl();
	}
	queue<ii> q;
	q.push(p);
	d[p._F][p._S] = 0;
	while(!q.empty()){
		k = q.front(); q.pop();
		x = k._F; y = k._S;
		vis[x][y] = true;
		for(i = 0; i < 4; i++){
			if(!vis[x+mx[i]][y+my[i]]){
				if(m[x+mx[i]][y+my[i]] != -1){
					q.push(_MP(x+mx[i], y+my[i]));
					d[x+mx[i]][y+my[i]] = min(d[x][y]+1, d[x+mx[i]][y+my[i]]);
				}
			}
		}
	}
	/*
	for1(i, n){
		for1(j, n){
			printf("%d\t", d[i][j]);
		}
		prnl();
	}*/
	if(d[f._F][f._S] > 101)
		prd(-1);
	else 
		printf("%d\n", d[f._F][f._S]);
}










