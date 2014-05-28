#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
	string s;
	bool b;
	int i, p, k, S, I=0;
	while(cin >> s){
		b = true;
		i = 0;
		p = 0;
		I++;
		for(k = 0; k < s.size(); k++){
			if (s[k] != '-')
				if(b){
					i+=s[k]-'0';
					b = false;
				} else {
					p+=s[k]-'0';
					b = true;
				}
			//printf("%d,%d\t", p, i);
		}
		S = (3*i + p)%10;
		//printf("%d\t", S);
		printf("Case #%d: %d\n", I, (10-S)%10);
	}
}