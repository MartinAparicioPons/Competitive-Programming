#include<cstdio>
#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;

int main(){
	int t;
	string str;
	cin >> t;
	while(t--){
		cin >> str;
		if((str[str.length()-1] == '0') ||(str[str.length()-1] == '5'))
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}