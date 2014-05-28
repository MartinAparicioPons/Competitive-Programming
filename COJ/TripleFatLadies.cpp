#include <cmath>
#include <cstdio>
#include <set>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;

unsigned long long n, c;
//string st;
char a[50], b[4];

int main(){
	cin >> c;
	for(;c--;){
		cin >> n;
		switch (n%4){
			case 0: sprintf(b, "942"); break;
			case 1: sprintf(b, "192"); break;
			case 2: sprintf(b, "442"); break;
			case 3: sprintf(b, "692"); break;
		}
		if(n > 4){
			sprintf(a, "%llu%s", (n-1)/4, b);
		} else 
			sprintf(a, "%s", b);
		cout << a << endl;
	}
}