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
#include <cmath>
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
#define for0(i,n) for(i = 0; i < n; i++)
#define for1(i,n) for(i = 1; i <= n; i++)
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define _TL(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define _TU(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define SQ(x) ((x)*(x))
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;


int main(){
	int i, j, n, a[5005]={-1}, t=0, ac;
	scd(n);
	for0(i, n){
		scd(a[i]);
	}
	a[n] = -1;
	for(i = 0; i < n; i++){
		if(a[i] > 0){
			j = i; ac = 0;
			while(a[j] > 0){
				ac++;
				j++;
			}
			if(ac > a[i]){
				j = i;
				while(a[j] > 0){
					a[j]--;
					j++;
				}
				i--;
			} else {
				a[i] = 0;
			}
			t++;
		}
	}
	prd(t);
}










