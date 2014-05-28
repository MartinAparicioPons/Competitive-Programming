#include <set>
#include <iterator>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <iostream>
typedef unsigned long long tint;
using namespace std;

string a, b;
int main(){
	int i, j;
	getline(cin, a);
	for(;a[0]!='#';){
		b = "";
		for(i=0; i<a.length(); i++){
			switch(a[i]){
				case ' ': b+="%20"; break;
				case '!': b+="%21"; break;
				case '$': b+="%24"; break;
				case '%': b+="%25"; break;
				case '(': b+="%28"; break;
				case ')': b+="%29"; break;
				case '*': b+="%2a"; break;
				default: b+=a[i];
			}
		}
		cout << b << endl;
		getline(cin, a);
	}

}