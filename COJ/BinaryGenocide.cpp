#include <iostream>
#include <cstdio>
using namespace std;


int main(){
	int a,i,j,k;
	j=0;
	k=0;
	while(cin >> a){
		k++;
		i=0;
		while(a){
			if (a % 2 == 1) i++;
			a/=2;
		}
		if (i%2 == 1) j++;
	}
	cout << (k-j) << endl;
}
