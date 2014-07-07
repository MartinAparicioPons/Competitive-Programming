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
using namespace std;


int main(){
	set<int> a, c;
	set<int>::iterator it;
	int i, n, j, m, aux;
	scd(n);
	for0(i, n){
		scd2(aux, m);
		a.insert(aux);
		for0(j, m){
			scd(aux);
			c.insert(aux);
		}
	}
	for(it = c.begin(), aux = 0; it != c.end(); it++){
		if(a.find( * it) == a.end())
			aux++;
	}
	cout << aux;
}
