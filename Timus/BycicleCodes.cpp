#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if ((a%2 == 0) || (b%2 != 0))
		cout << "yes\n";
	else
		cout << "no\n";
	return 0;
}
