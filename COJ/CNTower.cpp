#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <functional>
#include <vector>
#include <cmath>
#include <cstring>
#include <string>
#define _2(n) (1<<(n))
using namespace std;
typedef long long tint;

int main(){
	int t, n, i;
	vector<float> v;
	float a, m;
	string aux;
	scanf("%d", &t);
	for(;t--;){
		v.clear();
		scanf("%d", &n);
		for(i = 0; i < n; i++){
			cin >> aux >> a;
		//	printf("%f\t", a);
			v.push_back(a);
		}
		sort(v.begin(), v.end());
		m = 360 + v[0] - v[n-1];
		//printf("%.1f\t", m);
		for(i = 1; i < n; i++){
			a = abs(v[i] - v[i-1]);
			//printf("%.1f\t", a);
			if(a > m){
				m = a;
			}
		}
		if(n == 2){
			m = min((float)(360.0 - m), m);
		} else {
			m = ceil(360.0 - m);
		}
		i = (int) ceil(m);
		if(i%360 == 0){
			printf("0\n");
		} else {
			printf("%d\n", (i * 12));
		}
	}
}
