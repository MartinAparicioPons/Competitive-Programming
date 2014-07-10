#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main () {
	vector<int> vec;
	vec.resize(0);
	vec.resize(3);
	cin >> vec[0];
	while(vec[0]){
		cin >> vec[1] >> vec[2];
		sort(vec.begin(), vec.end());
		if((vec[0]*vec[0]) + (vec[1]*vec[1]) == (vec[2]*vec[2]))
			cout << "right" << endl;
		else
			cout << "wrong" << endl;
		vec.resize(0);
		vec.resize(3);
		cin >> vec[0];
	}
}