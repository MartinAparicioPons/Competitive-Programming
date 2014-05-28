#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long int tint;

int main(){
	int i, t, num;
	string s;
	cin >> t;
	for(;t--;){
		cin >> s;
		num = 0;
		for(i=s.length()-1; i>=0; i--){
			if(s[i] == '1'){
				if(i%2){
					num++;
				} else {
					num += 2;
				}
			}
		}
		if((num%3)==0) 
			printf("YES\n");
		else
			printf("NO\n");
	}
}