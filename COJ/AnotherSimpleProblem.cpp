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
	int t, n, i, j, k;
	char a[80][80], aux;
	set<char> s;
	bool ok;
	scd(t);
	while(t--){
		scd(n);
		ok = true;
		s.clear();
		for(i = 0; i < n; i++){
			scanf("%s", a[i]);
		}
		
		for(k = 0; (k*2) < n; k++){
			aux = a[k][k];
			if(s.find(aux) != s.end()){
				ok = false;
				break;
			}
			s.insert(aux);
			for(i = k; i < (n-k); i++){
				if(a[i][k] != aux){
					ok = false;
					k = n;
					break;
				}
			}
			if(k!=n)
				for(i = k; i < (n-k); i++){
					if(a[k][i] != aux){
						ok = false;
						k = n;
						break;
					}
				}
			if(k!=n)
				for(i = k; i < (n-k); i++){
					if(a[i][n-k-1] != aux){
						ok = false;
						k = n;
						break;
					}
				}
			if(k!=n)
				for(i = k; i < (n-k); i++){
					if(a[n-k-1][i] != aux){
						ok = false;
						k = n;
						break;
					}
				}
		}
			
		if (ok)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
