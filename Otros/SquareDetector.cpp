#include <cmath>
#include <iterator>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;


int main(){
	int t, n, k, i, j, h, l;
	char c;
	bool b[22][22];		//true si es black.  #
	cin >> t;
	int p;
	for(i = 1; i <= t; i++){
		cin >> n;
		p = 0;
		for(j=1; j <= n; j++){
			for(k=1; k <= n; k++){
				cin >> c;
				b[j][k] = (c == '#');
			}
		}
		for(j = 1; j <= n; j++){
			for(k = 1; k <= n; k++){
				if(b[j][k]){
					while((k+p<=n)&&(b[j][k+p]))p++;
					goto GORO;
				}
			}
		}
		GORO:;
		if(k+p-1==n) p++;
		//printf("<<j= %d, k= %d, p= %d\n", j, k, p);
		//Para los . de más
		for(h=j;h <= n; h++){
			for(l=k; l <= n; l++){
				if(!b[h][l]){
					if(((1+h-j)<=p) && ((1+l-k)<=p)){
						//printf("A<<h= %d, l= %d, p= %d\n", h, l, p);
						goto MAL;
					}
				}
			}
		}
		//Para los # de más.
		for(h=1; h<=n; h++){
			for(l=1; l<=n; l++){
				if(b[h][l]){
					if(!(((j+p>h)&&(j<=h))&&((k+p>l)&&(k<=l)))) {
						//printf("B<<h= %d, l= %d, p= %d\n", h, l, p);
						goto MAL;
					}
				}
			}
		}
		printf("Case #%d: YES\n", i);
		continue;
		MAL:printf("Case #%d: NO\n", i);
		
	}
}