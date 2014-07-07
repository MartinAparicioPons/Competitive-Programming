#include <cstdio>
#include <vector>
#include <set>
#include <queue>
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
using namespace std;

int main(){
	int t, i, j, n, p;
	int a[110];
	string s;
	scd(t);
    cin.ignore(100, '\n');
	for(i=1; i <= t; i++){
		getline(cin, s);
		for0(j,100){ 
			a[j]=0;
		}
		for(p = 0, j = 0, n = s.size(); j < n; j++){
			if(s[j] == '<')
				p = (p==0)?(99):(p - 1);
			else if(s[j] == '>')
				p = (p==99)?(0):(p+1);
			else if(s[j] == '+')
				a[p] = (a[p]==255)?(0):(a[p]+1);
			else if(s[j] == '-')
				a[p] = (a[p]==0)?(255):(a[p]-1);
		}
		printf("Case %d:", i);
		for0(j,100){
			printf(" %02X", a[j]);
		}
		//if(i != t)
			printf("\n");
	}
}
