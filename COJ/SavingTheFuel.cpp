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
	string s;
	int t, n, i, d, aux;
	scanf("%d", &t);
	while(t--){
		vector<int> v;
		scanf("%d %d", &n, &d);
		cin >> s;
		for(i = 0; i < n; i++){
			scanf("%d", &aux);
			v.push_back(aux);
		}
		sort(v.begin(), v.end());
		aux = 0;
		if(s == "regulate"){
			for(i = (n - d); i < n; i++){
				aux += v[i];
			}
		} else {
			for(i = 0; i < d; i++){
				aux += v[i];
			}
		}
		printf("%d\n", aux);
	}
	
}
