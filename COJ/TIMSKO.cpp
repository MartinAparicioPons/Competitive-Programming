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
	int m, n, k, r;
	cin >> m >> n >> k;
	if(m == n*2){
		for(;k>0;k-=3){
			m-= 2;
			n--;
		}
	} else {
		if(m > n*2){
			r = m - n*2;
			k -= r;
			m -= r;
			for(;k>0;k-=3){
				m-= 2;
				n--;
			}
		} else {
			r = n - (m/2);
			k -= r;
			n -= r;
			for(;k>0;k-=3){
				m-= 2;
				n--;
			}
		}
	}
	if (n < 0) n = 0;
	cout << n;
}