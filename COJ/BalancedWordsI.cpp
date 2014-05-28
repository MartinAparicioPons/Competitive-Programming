#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int main(){
	string s;
	int M, m, n;
	cin >> n;
	while (n--){
		cin >> s;
		m = 0;
		M = 0;
		for(int j = 0; j <= s.size(); j++){
			if((s[j] <= 'Z') && (s[j] >= 'A'))
				M++;
			if((s[j] <= 'z') && (s[j] >= 'a'))
				m++;
		}
		if(m == M) printf("SI\n");
		else printf("NO\n");
		//cout << m << M;	
	}
}
