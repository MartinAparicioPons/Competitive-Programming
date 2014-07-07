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
typedef pair<int, ii> iii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;

int d1[8]={1, 2, 1, 2, -1, -2, -1, -2},
	d2[8]={2, 1, -2, -1, 2, 1, -2, -1};
queue<iii> q;
bool validar(int a, int b){
	return (a >= 0) && (a < 8) && (b < 8) && (b >= 0);
}
int bfs (int a, int b, int c, int d){
	bool vis[10][10] = {false};
	iii m;
	int x, y, min = 999, pas = 0, i;
	q.push(_MT(0, a, b));
	vis[a][b] = true;
	while(!q.empty()){
		m = q.front(); q.pop();
		pas = m._F;
		x = m._S._F;
		y = m._S._S;
		//printf("|| %d %d %d %d %d %d\n", x, c, y, d, min, pas);
		if((x == c) && (y == d) && (min > pas))
			min = pas;
		//prd(pas);
		
		for(i = 0; i < 8; i++){
			//cout << x << ", " << y << ".\n";
			if(validar(d1[i]+x, d2[i]+y) && !vis[d1[i]+x][d2[i]+y]){
				vis[d1[i]+x][d2[i]+y] = true;
				q.push(_MT(pas+1, d1[i]+x, d2[i]+y));
				//cout << d1[i]+x << ", " << d2[i]+y << ":\n";
			}
		}
	}
	return min;
}

int main(){
	string s;
	int i, j;
	while(getline(cin, s)){
		printf("To get from %c%c to %c%c takes %d knight moves.\n", s[0], s[1], s[3], s[4], bfs(s[0]-'a', s[1]-'1', s[3]-'a', s[4]-'1'));
	}
}



