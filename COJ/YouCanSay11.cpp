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

int main(){
	char n;
	int i;
	long long ac;
	n = getchar();
	while (n != '0'){
		string acc;
		i = 0;
		ac = 0;
		while (n != '\n'){
			acc += n;
			if ((i%2) == 0) 
				ac += n - '0';
			else
				ac -= n - '0';
			n = getchar();
			i++;
		}
		if (ac%11 == 0) 
			cout << acc << " is a multiple of 11.\n";
		else
			cout << acc << " is not a multiple of 11.\n";		
		n = getchar();
	}
	
	
}