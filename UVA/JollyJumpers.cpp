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
	int a, n, b, i, c;
	while(scd(n) != EOF){
		bool v[3001] = {false}, ok=true;
		scd(a);
		for(i = 1; i < n; i++){
			scd(b);
			v[abs(b - a)] = true;
			a = b;
		}
		for(i=1; i < n; i++){
			if(!v[i]){
				ok = false;
				break;
			}
		}
		if(ok) 	printf("Jolly\n");
		else 	printf("Not jolly\n");
	}
}






