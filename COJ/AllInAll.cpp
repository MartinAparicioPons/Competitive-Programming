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

// TLE.


int main(){
	char a;
	int i = 0;
	int fin; //printf("\t%c %c\n", str[i], str2[j]);
	string str, str2;
	str = "";
	cin >> str;
	while (str[0] != EOF){
		i = 0;
		str2 = "";
		cin >> str2;
		fin = str.size();
		for (int j = 0; (i < fin) && (j < str2.size()); j++){
			if(str[i] == str2[j]) i++;
		}
		if (i == fin){
			printf("Yes\n");
		} else {
			printf("No\n");			
		}
		cin >> str;
	}
	
	
}