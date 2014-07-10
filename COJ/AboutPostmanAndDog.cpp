#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

long pre[1000];


int main(){
	int a,b,c,d,m,p,g,ai,aux;
	cin >> a >> b >> c >> d;
	cin >> m >> p >> g;
	ai = 0;
	memset(pre, 0, 1000);
	if (m > p) {
		if (m > g)
			aux = m;
		else
			aux = g;
	} else {
		if (p > g)
			aux = p;
		else
			aux = g;
	}
	for (int i = 0; i <= aux;){
		while (ai < a){
			pre[i]++;
			ai++;
			i++;
		}
		ai = 0;
		while (ai < b){
			ai++;
			i++	;
		}
		ai = 0;
	}
	for (int i = 0; i <= aux;){
		while (ai < c){
			pre[i]++;
			ai++;
			i++;
		}
		ai = 0;
		while (ai < d){
			ai++;
			i++;
		}
		ai = 0;
	}
	//for (int i = 0; i < 1000; i++) printf("%d ",pre[i]);
	if (pre[m-1] == 0) printf("none\n");	
	if (pre[m-1] == 1) printf("one\n");
	if (pre[m-1] == 2) printf("both\n");

	if (pre[p-1] == 0) printf("none\n");	
	if (pre[p-1] == 1) printf("one\n");
	if (pre[p-1] == 2) printf("both\n");
	
	if (pre[g-1] == 0) printf("none\n");	
	if (pre[g-1] == 1) printf("one\n");
	if (pre[g-1] == 2) printf("both\n");
}
