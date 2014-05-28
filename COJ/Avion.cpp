#include <stdio.h>
#include <iostream>
#include <cstring>
#include <string>
#include <set>
using namespace std;

int main(){
	string a;
	int i, j;
	set<int> res;
	for(i=1; i<=5; i++){
		cin >> a;
		for(j=0; j < a.length()-2; j++){
			if((a[j] == 'F') && (a[j+1] == 'B') && (a[j+2] == 'I')){
				res.insert(i);
				break;
			}
		}
	}
	if(res.empty()) printf("HE GOT AWAY!");
	else
		for(set<int>::iterator it = res.begin(); it != res.end(); it++){
			if(it == res.begin()) 
				printf("%d", *it);
			else
				printf(" %d", *it); 
		}
}