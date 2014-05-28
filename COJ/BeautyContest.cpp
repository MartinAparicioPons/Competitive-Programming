#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<cmath>
#define NO(x) ((x==1)?0:1)
using namespace std;

int main(){
	int m,M,tot,i,t,a,j;
	cin >> t;
	for(i = 1; i <= t; i++){
		m = 101;
		M = -1;
		tot = 0;
		for(j = 0; j < 10; j++){
			cin >> a;
			tot += a;
			//cout << m << "  " << M << endl;
			if(a < m){
				m = a;
			}
			if (a > M){
				M = a;
			}
		}
		tot = tot - m - M;
		printf("%d %d\n", i, tot);
	}
}