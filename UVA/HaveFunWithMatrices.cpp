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

int main(){
	int t, n, m, l, i, j, k, a, b, v[11][11], vv[11][11];
	char aux;
	string s;
	scd(t);
	for(i=1; i<=t; i++){
		scd(n);
		for(j=0; j < n; j++){
			cin >> s;
			for(k=0; k < n; k++){
				v[j][k] = s[k]-'0';
			}
		}
		scd(m);
		for(l=0; l<m; l++){
			cin >> s;
			if(s == "row"){
				scd2(a, b); a--; b--;
				for0(j, n){
					swap(v[a][j], v[b][j]);
				}
			} else if(s == "col"){
				scd2(a, b); a--; b--;
				for0(j, n){
					swap(v[j][a], v[j][b]);
				}
			} else if(s == "inc"){
				for0(j, n){
					for0(k, n){
						v[j][k] = (v[j][k] + 1)%10;
					}
				}
			} else if(s == "dec"){
				for0(j, n){
					for0(k, n){
						if(v[j][k] == 0) v[j][k]=9;
						else v[j][k]--;
					}
				}
			} else if(s == "transpose"){
				for0(j, n){
					for0(k, n){
						vv[j][k] = v[k][j];
					}
				}
				for0(j, n){
					for0(k, n){
						v[j][k] = vv[j][k];
					}
				}
			}
		}
		printf("Case #%d\n", i);		
		for0(j, n){
			for0(k, n){
				printf("%d", v[j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}






