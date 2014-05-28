#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;

//Not sent. Probably WA.

int main(){
	map<string, int> M;
	string s, str;
	char aux[100], aux2[100];
	int m,n,i,a;
	cin >> n >> m;
	for(i=0;i<n;i++){
		cin >> s >> a;
		M.insert(pair<string, int>(s, a));
	}
	for(i=0; i < m; i++){
		getline(cin, str);
		size_t pun = str.find(" ");
		if(pun!=string::npos){		//Hay un espacio
			str.copy(aux2, pun, 0);
			str.copy(aux, str.end() - pun - 1, pun+1);
			a = atoi(aux);
			if((M.find(aux2)!=M.end()) && ((M.find(aux2)->second) == a))
				printf("ok\n");
			else
				printf("wrong\n");
		} else {
			if(M.find(str)!=M.end())
				printf("ok\n");
			else
				printf("not found\n");
		}
		
	}
}
