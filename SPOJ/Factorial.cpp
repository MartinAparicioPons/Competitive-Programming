#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef unsigned long long tint;

int main(){
	tint a, i, t, vn, res;
	vector<tint> v;
	for(i = 5; i < 1000000000; i*=5){
		v.push_back(i);
	}
	vn = v.size();
	scanf("%llu", &t);
	while(t--){
		scanf("%llu", &a);
		res = 0;
		for(i = 0; (v[i] <= a) && (i < vn); i++){
			res += a/v[i];
		}
		printf("%llu\n", res);
	}
}
