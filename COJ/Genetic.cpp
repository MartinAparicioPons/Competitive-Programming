#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<set>
#include<cmath>
using namespace std;

int main(){
	int n;
	string a, b;
	cin >> n;
	for(;n--;){
		cin >> a >> b;
		if((a.find(b) != string::npos) && (a.find('T') != string::npos)){
			printf("Y\n");
		} else {
			printf("N\n");
		}
		
	}
}