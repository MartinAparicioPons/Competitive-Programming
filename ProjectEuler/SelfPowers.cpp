#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
 
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 1000;
const ull MOD = 10000000000ll;

ull selfPow(int n){
	ull r = 1ll; int i;
	for(i = 0; i < n; i++) r = (r * n)%MOD;
	return r%MOD;
}

int main(){
	ios_base::sync_with_stdio(0);
	int i; ull R = 0;
	for(i = 1; i < MAXN; i++){
		R = (R + selfPow(i))%MOD;
	}
	cout << R << endl;
}
