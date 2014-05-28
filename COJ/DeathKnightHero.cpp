#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <map>
#include <cmath>
#include <utility>
#include <iterator>
#include <cstdlib>
#include <set>
using namespace std;
typedef unsigned long long tint;


int main(){
	int n, i, ac=0;
	string s;
	bool b;
	cin >> n;
	for(;n--;){
		cin >> s;
		b = true;
		for(i=1;i<s.length();i++){
			if((s[i-1] == 'C')&&(s[i] == 'D'))
				b = false;
		}
		if(b) ac++;
	}
	cout << ac;
}
