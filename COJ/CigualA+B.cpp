#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <cstring>
#include <utility>
#include <iostream>
using namespace std;
typedef long long tint;

int main () {
	tint e = 0;
	tint i = 0;
	tint aux;
	char a;
	string str;
	string sal1="";
	string sal2="";
	cin >> str;
	for(;i< str.length();i++)
		e += str[i] - 'A' + 1;
	if((e % 2) == 0){
		e /= 2;
		for (;e > 0;){
			if (e >= 26){
				aux = 26;
				a = 'Z';
			} else {
				aux = e; 
				a = e + 'A' - 1;
			}
			e-=aux;
			sal1 += a;
		}
		sal2 = sal1;
	} else {		
		e--;
		e /= 2;
		for (;e > 0;){
			if (e >= 26){
				aux = 26;
				a = 'Z';
			} else {
				aux = e; 
				a = e + 'A' - 1;
			}
			e-=aux;
			sal1 += a;
		}
		sal2 = sal1;
		tint r = sal2.length() - 1;
		if(sal2[r] == 'Z'){
			sal2 += 'A';
		} else {
			sal2[r]++;
		}
	}
	cout << sal1 << " " << sal2;
}