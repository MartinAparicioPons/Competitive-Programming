#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int main(){
	int M1, m1, M2, m2, n, j;
	cin >> n;
	for(;n--;){
		string s;
		cin >> s;
		m1 = 0;
		M1 = 0;
		M2 = 0;
		m2 = 0;
		if (s.size() == 1) 
			printf("SI\n");
		else {
			for(j = 0; j < s.size(); j++){
				//puts("A");
				if(((s.size()%2 == 1) && (j == (s.size())/2))){	
					continue;
				}
				if((s[j] <= 'Z') && (s[j] >= 'A'))
					if(j>((s.size()-1)/2))
						M2++;
					else
						M1++;
				if((s[j] <= 'z') && (s[j] >= 'a'))
					if(j>((s.size()-1)/2))
						m2++;
					else
						m1++;
			}
			if((m1 == m2)&&(M1 == M2)) printf("SI\n");
			else printf("NO\n");
			//cout << m1 << M1 << m2 << M2;	
		}
	}
}
