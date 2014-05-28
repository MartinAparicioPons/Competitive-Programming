#include <set>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iterator>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
string s;

int valor(){
	int i, res=0;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(i = 0; i < s.length(); i++){
		if((s[i] >= 'a') && (s[i] <= 'z')){
			res += s[i] - 'a';
		}
	}
	return res;
}

int main() {
	int max=-1, v, i;
	set<int> M;
	set<int>::iterator itr;
	for(i=1; cin >> s; i++){
		v = valor();
		if(v == max){
			M.insert(i);
		} else {
			if(v > max){
				max = v;
				M.clear();
				M.insert(i);
			}
		}
	}
	printf("%d\n", max);
	for(itr = M.begin();itr != M.end();itr++){
		printf("%d\n", *itr);
	}
}