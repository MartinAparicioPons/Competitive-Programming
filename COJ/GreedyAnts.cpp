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
	int n, i, tot;
	double aux;
	while(scanf("%d", &n) != EOF){
		vector<double> v;
		tot = 0;
		for(i = 0; i < n; i++){
			scanf("%lf", &aux);
			//printf("%.4lf\t", aux);
			v.push_back(aux);
		}
		sort(v.begin(), v.end());
		for(i = 0; i < n;){
			aux = v[i];
			tot++;
			while(((aux + 1.0) >= v[i]) && (i < n)){
				i++;
				//puts("SOASLDFS");
			}
		}
		printf("%d\n", tot);
	}
}
