#include <cmath>
#include <iterator>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <iostream>
typedef unsigned long long tint;
using namespace std;

int main(){
	int i, j;
	string a, b, c="", d="", e="";
	cin >> a;
	cin >> b;
	for(i=0, j=0;(i < a.length())&&(j < b.length());){
		if(a[i] == b[j]){
			e += a[i];
			i++; j++;
		} else {
			if(a[i] < b[j]){
				c += a[i];
				i++;
			} else {
				d += b[j];
				j++;
			}
		}
	}
	for(;i<a.length();i++)
		c += a[i];
	for(;j<b.length();j++)
		d += b[j];
		
	cout << "First:" << c << "\nSecond:" << d << "\nFirst&Second:" << e;
	
}