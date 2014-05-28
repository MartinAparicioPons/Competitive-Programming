#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	int n, i;
	string s;
	cin >> n;
	for(;n--;){
		cin >> s;
		if (s[s.size()-1] % 2 == 0) printf("even\n");
		else printf("odd\n");	
	}
}