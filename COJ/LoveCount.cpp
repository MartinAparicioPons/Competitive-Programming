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
	int n, m, j, ni, p=0;
	vector<int> i;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &m);
		if(m%2 == 0) 
			p += m;
		else{
			i.push_back(m);
		}
	}
	sort(i.begin(), i.end());
	ni = i.size();
	if(ni != 0){
		if(ni%2 == 0)
			j = 1;
		else
			j = 0;
		for(;j < ni; j++){
			p += i[j];
		}
		printf("%d", p);
	} else
		printf("-1");
}
