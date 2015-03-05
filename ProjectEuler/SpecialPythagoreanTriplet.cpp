#include <bits/stdc++.h>
using namespace std;

#define SQ(x) ((x)*(x))

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 1001;

int S[SQ(MAXN)*3];

void init(){
	int i;
	memset(S, 0, sizeof S);
	for(i = 1; i < MAXN; i++){
		S[i*i] = i;
	}
}

// Running time: 0.01s
void solve(){
	init();
	int a, b, c, h;
	for(a = 1; a < MAXN; a++){
		for(b = a+1; b < MAXN; b++){
			c = SQ(a) + SQ(b);
			if(S[c] != 0){
				c = S[c];
				if(a+b+c == 1000){
					cout << a*b*c << endl;
					return;
				}
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	clock_t t1 = clock(), t2;
	solve();
	t2 = clock();
	printf("%f\n", ((float)t2 - (float)t1)/CLOCKS_PER_SEC);
}
