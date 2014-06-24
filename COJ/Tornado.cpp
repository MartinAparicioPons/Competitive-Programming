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
	int n, i, a, r;
	vector<bool> v;
	bool todosCeros;
	while(scanf("%d", &n) != EOF){
		todosCeros = true;
		v.clear();
		for(i = 0; i < n; i++){
			scanf("%d", &a);
			if(a == 0)
				v.push_back(false);
			else {
				v.push_back(true);
				todosCeros = false;
			}
		}
		v.push_back(true);
		for(i = 0, a = 0, r = 0; i < n;){
			if(v[i]){
				//printf("a%d\t", a);
				r += a/2;
				i++;
				a = 0;
			} else {
				while(!v[i]){
					a++;
					i++;
				}
			}
		}
		r += a/2;
		if((a%2==1)){
			for(i = 0, a = 0; (i < n) && (!v[i]);){
				while(!v[i]){
					a++;
					i++;
				}
			}
			if(a%2==1) r++;
		}
		
		printf("%d\n", r);
	}
}
