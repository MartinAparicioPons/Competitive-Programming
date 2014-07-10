#include <cstdio>
#include <cstring>
#include <string>
#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;

int main () {
	int n, i, j;
	cin >> n;
	for(i = 1; i <= n; i++){
		string s;
		char s1[1000000];
		double total=0, aux;
		for (j = 0; j < 12; j++){
			cin >> aux;
			total += aux;
		}
		sprintf (s1, "%.2lf", total/12.0);
		s = string(s1);
		s = string(s.rbegin(), s.rend());
		for(j = 6; j < s.length(); j+=3){
			s.insert(j, ",");
		}
		s = string(s.rbegin(), s.rend());
		cout << i << " $" << s << "\n";
	}
}