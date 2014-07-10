#include <cstdio>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;

int main () {
	int m, n, i, id, b[12]={0,0,0,0,0,0,0,0,0,0,0,0};
	string s;
	cin >> n;
	for(;n--;){
		cin >> id >> s;
		char a[2] = "";
		for(i = 1; s[i]!='/';)i++;
		i++;
		for(int j = 0; s[i]!='/'; i++, j++)a[j]=s[i];
		m = atoi(a);
		//cout << a << "<>><<<";
		b[m-1]++;
	}
	for(i=0;i<12;i++) printf("%d %d\n", i+1, b[i]);
}