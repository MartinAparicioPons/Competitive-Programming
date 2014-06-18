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
	int c, M, m, aux, tot=0;
	scanf("%d", &c);
	scanf("%d", &M);
	m = M;
	c--;
	while(c--){
		scanf("%d", &aux);
		if (aux > M){
			tot++;
			M = aux;
		}
		if (aux < m){
			tot++;
			m = aux;
		}
	}
	printf("%d", tot);
}
