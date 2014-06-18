#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>
#include<map>
#include<iterator>
#include<string>
#include<cstring>
using namespace std;

int main(){
	int t, n, i, aux;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		vector<int> v;
		for(i = 0; i < n; i++){
			scanf("%d", &aux);
			v.push_back(aux);
		}
		sort(v.begin(), v.end());
		aux = 0;
		for(i = 0; i < n - 1; i++){
			aux += v[i];
		}
		printf("%d\n", aux);
	}

}
