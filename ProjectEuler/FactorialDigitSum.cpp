#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll; typedef unsigned long long ull;
typedef int tint; typedef pair<tint, tint> ii;
const int MAXN = 100;

char n[MAXN*MAXN];
int l;

void mult(int k){
	int i, c = 0, a;
	for(i = 0; i < l; i++){
		a = (n[i]*k + c);
		n[i] = a % 10;
		c = a / 10;
	}
	while(c){
		n[l++] = c % 10;
		c /= 10;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	int i, j, m = 0;
	n[0] = 1; l = 1;
	for(i = 2; i <= MAXN; i++){
		mult(i);
	}
	for(i = 0; i < l; i++){
		m += n[i];
	}
	cout << m << endl;
}
