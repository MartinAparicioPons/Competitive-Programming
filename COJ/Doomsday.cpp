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

//Prob WA


int main(){
	int d1,d2,m1,m2;
	cin >> d1 >> m1 >> d2 >> m2;
	while(d1 != 0){
		if ((d1 <= 31) && (d2 <= 31) && (d1 >= 1) && (d2 >= 1) && (m1 <= 12) && (m2 <= 12) && (m1 >= 1) && (m1 >= 1)){
			if ((d1 == m1) && (d2 == m2)){
				printf("S\n");
			} else {
				printf("N\n");			
			}
		} else {
				printf("N	\n");			
		}
		cin >> d1 >> m1 >> d2 >> m2;	
	}
}
