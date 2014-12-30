#include <bits/stdc++.h>
using namespace std;

const int MAX = 100010;

int main(){
	int i, j, n, m, a[MAX], b[MAX], r;
	unordered_set<int> s;
	while(scanf("%d", &m) != EOF){
		s.clear();
		r = 0;
		scanf("%d", a);
		b[0] = a[0];
		s.insert(b[0]);
		for(i = 1; i < m; i++){
			scanf("%d", a+i);
			b[i] = b[i-1] + a[i];
			s.insert(b[i]);
		}
		if(n%3 == 0){
			j = b[m-1]/3;
			for(i = 0; i < m - 2; i++){
				if((s.find(b[i]+j) != s.end()) && (s.find(b[i]+(2*j)) != s.end())){
					r++;
				}
			}
		}
		printf("%d\n", r);
	}
}
