#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 100010;


int main(){
	ios_base::sync_with_stdio(0);
	int n, x, a, b;
	a = b = 0;
	cin >> x >> n;
	while(n >= 1 && x >= 1 && x+n >= 3){
		if(n > x){
			n-=2;
			x--;
			b++;
		} else {
			x-=2;
			n--;
			b++;
		}
	}
	cout << b << endl;
}
