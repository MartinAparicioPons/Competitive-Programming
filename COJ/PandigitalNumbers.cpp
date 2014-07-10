#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

vector<unsigned long long> p2;
void preprocessing(){
	p2[0]=1;
	for(int i = 1; i<63; i++) p2[i]=p2[i-1]*2;
}

int main(){
	unsigned long long int a,t;
	int i;
	double aux;
	bool b;
	p2.resize(64);
	preprocessing();
	cin >> t;
	while(t--){
		cin >> a;
		b = false;
		if (a <= 1) printf("NO\n");
		else {
			if(binary_search(p2.begin(), p2.end(), a+1))
				printf("NO\n");
			else printf("YES\n");
		}
	}
}
