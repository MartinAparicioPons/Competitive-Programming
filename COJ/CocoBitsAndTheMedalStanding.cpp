#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct st{
	int a, b, c, d;
	
	st(int a=0, int b=0, int c=0, int d=0)
		: a(a), b(b), c(c), d(d)
	{}
	
	bool operator<(const st& y) const{
		if(b < y.b){
			return true;
		} else {
			if(b == y.b){
				if(c < y.c){
					return true;
				} else {
					if(c == y.c){
						if(d < y.d){
							return true;
						} else {
							if(d == y.d)
								return (a > y.a);
						}
					}
				}
			}
		}
		return false;
	}
};


int main(){
	vector<st> v;
	int i, a, b, c;
	for(i = 1; i < 8; i++){
		scanf("%d %d %d", &a, &b, &c);
		v.push_back(st(i, a, b, c));
	}
	sort(v.begin(), v.end());
	for(i = 6; i >= 0; i--){
		printf("Facultad %d %d %d %d\n", v[i].a, v[i].b, v[i].c, v[i].d);
	}
}
