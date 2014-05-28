#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main () {
	string a;
	int total=0;
	cin >> a;
	for(int i = 0; i < a.length(); i++){
		total += a[i] - ('A' - 1);
	}
	cout << total;
}
