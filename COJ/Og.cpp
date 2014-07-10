#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	while ((a != 0) && (b != 0)){
		cout << a+b << endl;
		cin >> a >> b;
	}
}