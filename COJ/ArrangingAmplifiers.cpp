#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<utility>
#define ull unsigned long long
using namespace std;

// WA.

int main(){
	ull k;
	vector<ull> vec;
	int T, n, i, j;
	cin >> T;
	for (i = 0; i < T; i++){
		cin >> n;
		vec.resize(0);
		vec.resize(n);
		for (j = 0; j < n; j++)
			cin >> vec[j];
		sort(vec.begin(), vec.end());
		/*if((vec[n-1] == 3) && (vec[n-2] == 2)){
			for (j = n-1; vec[j] == 2; j--){
				ull aux  = vec[j-1];
				vec[j-1] = vec[j-2];
				vec[j-2] = aux;
			}
		}*/
		
		for (j = 0; j < n; j++){
			if (vec[j] == 1) {
				ull a = vec[j];
				vec.erase(vec.begin() + j);
				vec.push_back(a);
			}
		}
		
		
		for (j = n; j > 0; j--){
			cout << vec[j-1] << " ";
		}
		printf("\n");
	}
	
}
