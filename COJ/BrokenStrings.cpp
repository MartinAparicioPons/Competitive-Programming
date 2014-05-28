#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<set>
#include<cmath>
using namespace std;

int main(){
	int b[7], t, i, a;
	bool ok;
	cin >> t;
	string s;
	for(;t--;){
		cin >> s;
		for(i = 0; i < 6; i++) b[i] = 0;
		for(i = 0; i < s.size(); i++){
			switch(s[i]){
				case 'B': b[0]++; break;
				case 'R': b[1]++; break;
				case 'O': b[2]++; break;
				case 'K': b[3]++; break;
				case 'E': b[4]++; break;
				case 'N': b[5]++; break;
			}
		}
		ok = ((b[0] == b[1]) && (b[0] == b[2]) && (b[0] == b[3]) && (b[0] == b[4]) && (b[0] == b[5]));
		if(!ok) printf("Secure\n");
		else printf("No Secure\n");
	}
}