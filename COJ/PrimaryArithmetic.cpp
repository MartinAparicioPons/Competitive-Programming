#include <utility>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
string a, b;


int carrys (){
	int i, j, res=0;
	a = string(a.rbegin(), a.rend());
	b = string(b.rbegin(), b.rend());
	if(b.length() > a.length())
		swap(a,b);

	for(i = 0; i < b.length(); i++){
		if((b[i] - '0') + (a[i] - '0') >= 10){
			res++;
			if (i < a.length()) a[i+1]++;
		}
	}
	for(i = b.length(); i <= a.length(); i++){
		if(a[i] == ('9'+1)) {
			res++;
			if(i < a.length()) a[i+1]++;
		}
	}
	return res;
}

int main() {
	int c;
	cin >> a >> b;
	while((b != "0") || (a != "0")){
		c = carrys();
		if (c == 0){
			printf("No carry operation.\n");
		} else
			if (c == 1){
				printf("1 carry operation.\n");
			} else
				printf("%d carry operations.\n", c);
		cin >> a >> b;
	}
	
}