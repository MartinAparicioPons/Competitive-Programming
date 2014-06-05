#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;


int main(){
	int n, x, i, aux;
	unsigned long long res=0;
	vector<int> v;
	scanf("%d", &n);
	for(i = 0; i<n; i++){
		scanf("%d", &aux);
		v.push_back(aux);
	}
	scanf("%d", &x);
	sort(v.begin(), v.end());
	for(i = 0; i<n; i++){
		aux = v.back(); v.pop_back();
		if(binary_search(v.begin(), v.end(), (x - aux)))
			res++;
	}
	printf("%llu\n", res);
	return 0;
}
