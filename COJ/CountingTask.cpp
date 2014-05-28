#include <set>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iterator>
#include <numeric>
#include <iostream>
#include <string>
using namespace std;
typedef unsigned long long tint;


int main() {
	int t, res, i;
	set<char> S;
	string s;
	cin >> t;
	for(;t--;){
		cin >> s;
		res = 0;
		S.clear();
		for(i=0; i<s.length(); i++){
			if(S.find(s[i]) == S.end()){
				res++;
				S.insert(s[i]);
			}
		}
		printf("%d\n", res);
	}
}