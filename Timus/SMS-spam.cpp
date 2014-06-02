#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int cost(char c){
	if ((c == 'a') || (c == 'd') || (c == 'g') || (c == 'j') || (c == 'm') || (c == 'p') || (c == 's') || (c == 'v') || (c == 'y') || (c == '.') || (c == ' '))
		return 1;
	else 
		if ((c == 'b') || (c == 'e') || (c == 'h') || (c == 'k') || (c == 'n') || (c == 'q') || (c == 't') || (c == 'w') || (c == 'z') || (c == ','))
			return 2;
		else
			return 3;
}

int main(){
	string str;
	int sol = 0;
	getline(cin, str);
	for(int i = 0;i<str.size();i++)
		sol+=cost(str[i]);
	printf("%d\n",sol);
}
