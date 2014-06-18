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
	int t, k, n, i, aux, ans;
	scanf("%d", &t);
	while(t--){
		vector<int> v;
		ans = 0;
		scanf("%d %d", &n, &k);
		k--;
		for(i = 0; i < n; i++){
			scanf("%d", &aux);
			v.push_back(aux);
		}
		for(i = 0; i < n; i++){
			if((v[i] > 0) && (v[i] >= v[k]))
				ans++;
		}
		printf("%d\n", ans);
	}
}
