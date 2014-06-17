#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<map>
#include<iterator>
#include<string>
#include<cstring>
using namespace std;

int main(){
	int n, u, p, m;
	bool first = true;
	while(scanf("%d", &n) != EOF){
		if(!first){
			printf("\n");
		}
		first = false;
		p = 0;
		u = 0;
		for(;n--;){
			scanf("%d", &m);
			if(m%2 == 0) p++;
			else u++;
		}
		if(u%2 == 0)
			printf("%d", p);
		else
			printf("%d", u);
	}
}
