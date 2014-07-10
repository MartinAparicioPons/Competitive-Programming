#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a, b;
	double aux;
	cin >> a >> b;
	aux = ((b-0.9999)*a);
	cout << ceil(aux);
}