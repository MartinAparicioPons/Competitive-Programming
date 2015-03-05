#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 110;

bool is_palindrome(int n){
	int x = 0, y = n;
	while(y){
		x = (x*10) + y%10;
		y /= 10;
	}
	return x == n;
}

// Running time: 0.037s
void solve(){
	int a, b, m = -1;
	for(a = 0; a < 1000; a++){
		for(b = a; b < 1000; b++){
			if(is_palindrome(a*b)){
				m = max(a*b, m);
			}
		}
	}
	printf("%d\n", m);
}

int main(){
	ios_base::sync_with_stdio(0);
	clock_t t1 = clock(), t2;
	solve();
	t2 = clock();
	printf("%f\n", ((float)t2 - (float)t1)/CLOCKS_PER_SEC);
}
