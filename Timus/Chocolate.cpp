#include <cstdio>
#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if((a*b)%2 == 0)
		cout << "[:=[first]\n";
	else
		cout << "[second]=:]\n";

}
