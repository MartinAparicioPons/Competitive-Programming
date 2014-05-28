#include <cstdio>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <set>
#include <iterator>
#include <iostream>
using namespace std;
typedef unsigned long long int tint;

//WA

tint stoi(const string *s){
	string a = *s;
	return a.length();
}

tint A[4] = {1, 255, (255*255), (255*255*255)};

int main () {
	string s, h="";
	int a[4],b[4], i, aux=0;
	cin >> s;
	for(i=0;s[i]!='.';i++){
		h+=s[i];
	}
	i++;
	h = string(h.rbegin(), h.rend());
	a[0] = stoi(&h);
	h="";
	for(;s[i]!='.';i++){
		h+=s[i];
	}
	i++;
	h = string(h.rbegin(), h.rend());
	a[1] = stoi(&h);
	h="";
	for(;s[i]!='.';i++){
		h+=s[i];
	}
	i++;
	h = string(h.rbegin(), h.rend());
	a[2] = stoi(&h);
	h="";
	for(;i<s.length();i++){
		h+=s[i];
	}
	i++;
	h = string(h.rbegin(), h.rend());
	a[3] = stoi(&h);
	h="";
	cin >> s;
	for(i=0;s[i]!='.';i++){
		h+=s[i];
	}
	i++;
	h = string(h.rbegin(), h.rend());
	b[0] = stoi(&h);
	h="";
	for(;s[i]!='.';i++){
		h+=s[i];
	}
	i++;
	h = string(h.rbegin(), h.rend());
	b[1] = stoi(&h);
	h="";
	for(;s[i]!='.';i++){
		h+=s[i];
	}
	i++;
	h = string(h.rbegin(), h.rend());
	b[2] = stoi(&h);
	h="";
	for(;i<s.length();i++){
		h+=s[i];
	}
	i++;
	h = string(h.rbegin(), h.rend());
	b[3] = stoi(&h);
	h="";
	
	
	tint c=0,d=0;
	for(i=0; i<4; i++){
		c+=a[i]*A[i];
		d+=b[i]*A[i];
		printf("%llu, %llu, %llu, %llu, \n", c, a[i], b[i], d);
	}
	printf("%llu", d - c);
}
