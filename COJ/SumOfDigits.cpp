#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string>
#include <cstring>
#include <utility>
using namespace std;

//WA

int main(){
	int t, ac;
	string s;
	getline(cin, s);
	t = atoi(s.c_str());
	while(t--){
		ac = 0;
		getline(cin, s);
		for(int i =0; i < s.size(); i++){
			if ((s[i] >= '0') && (s[i] <= '9'))
				ac += (s[i] - '0');
		}
		cout << ac << endl;
	}
}
