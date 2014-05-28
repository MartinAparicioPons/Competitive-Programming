#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <cmath>
#include <utility>
#include <set>
#include <stdio.h>
using namespace std;

vector<int> vec;
int i;
sumar (int a, int b){
	if (i < a) i = a;
	vec[a] += b;
	if (vec[a] > 0){	
		if (vec[a] / 10 > 0)
			sumar((a+1), (a%10));
	} else {
		sumar((a+1), -1);
		vec[a] = vec[a] + 10;
	}
}


int main (){
	char aux;
	int j = 0;
	aux = getchar();
	while(aux != EOF){
		i = 0;
		vec.resize(0);
		vec.resize(100);
		while (aux != '\n'){
			vec[i++] = aux - '0';
			aux = getchar();
		}
		j = 0;
		while (j < i){
			sumar(j, vec[j]);
			j++;
		}
		sumar(0, -2);
		for(j = 0; j < i; j++) cout << vec[j];
		cout << endl;
		aux = getchar();
		
	}
	
}