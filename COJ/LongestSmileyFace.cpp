#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <utility>
#include <algorithm>
#include <iterator>
#include <cstdlib>
using namespace std;

int main(){
	int t, j, a, i;
	bool esJ;
	string s;
	cin >> t;
	for(;t--;){
		j=0;
		a=0;
		esJ = true;
		cin >> s;
		for(i = 0; i < s.length(); i++){
			if(esJ) j++;
			else a++;
			if((s[i] == ')')&&((s[i+1] == ':')||(i == s.length()))){
				esJ = !esJ;
			}
		}
		if(a<j) printf("Jennifer\n");
		else printf("Alan\n");
	}

}