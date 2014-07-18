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
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;
#define MAX_N 100005

int main(){
	int n, i, j, k, ns=0, ms=0;
	bool vis[111]={false};
	ii a[111];
	scd(n);
	for0(i, n){
		scd(a[i]._F);
		a[i]._F--;
	}
	for0(i, n){
		scd(a[i]._S);
		a[i]._S--;
	}
	sort(a, a+n);
	
	//for0(i, n) prd2(a[i]._F, a[i]._S);
	
	for(i = 0; i < n; i++){
		if(vis[a[i]._F]) continue;
		vis[a[i]._F] = true;
		k = 1;
		for(j = i; !vis[a[j]._S];){
			//dprd2(j, a[j]._S);
			vis[a[j]._S] = true;
			k++;
			j = a[j]._S;
		}
		if(k != 1) ns++;
		if(ms < k) ms = k;
	}
	if(ms != 1)
		prd2(ns, ms);
	else
		prd2(0, -1);
}










