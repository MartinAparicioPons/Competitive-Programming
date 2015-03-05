#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 1000000, Prime = 10001;

set<int> C;


// Running time: 3s.
void sieve(){
	int i, n = 0, j;
	for(i = 2; i < MAXN; i++){
		if(C.find(i) != C.end()) {
			C.erase(i);
			continue;
		}
		n++;
		if(n == Prime) {
			printf("%d\n", i);
			return;
		}
		for(j = i+i; j < MAXN; j+=i){
			C.insert(j);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	clock_t t1 = clock(), t2;
	sieve();
	t2 = clock();
	printf("%f\n", ((float)t2 - (float)t1)/CLOCKS_PER_SEC);
}
