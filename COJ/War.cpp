#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int main(){
	int n,t;
	vector<long long int> a, b;
	cin >> n;
	a.resize(n);
	b.resize(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	for (int i = 0; i < n; i++){
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	t = 0;
	int j = n-1;
	for(int i = n-1; i >= 0; i--){
		if (a[i] < b[j]){
			t++;
			j--;
		}
	}
	cout << t << endl;
}