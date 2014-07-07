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

long long int rev(long long int a){
	long long int i, j, b=0;
	for(i = 1; a >= i;)
		i*=10;
	for(; a > 0; a/=10, i/=10){
		b += (a%10)*(i/10);
	}
	return b;
}

int main(){
	long long int a, t, r, i;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld", &a);
		r = rev(a);
		i = 0;
		while(r != a){
			i++;
			a += r;
			r = rev(a);
			//printf("%lld'%lld|",r,a);
		}
		printf("%lld %lld\n", i, a);
	}
}






