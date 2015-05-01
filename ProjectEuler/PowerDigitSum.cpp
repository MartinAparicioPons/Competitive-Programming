#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll; typedef unsigned long long ull;
typedef int tint; typedef pair<tint, tint> ii;
const int MAXN = 1000;

char n[MAXN];
int l;

void dupl(){
	int i, c = 0, a;
	for(i = 0; i < l; i++){
		a = (n[i]*2 + c);
		n[i] = a % 10;
		c = a / 10;
	}
	if(c){
		n[l++] = c;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	int i, j, m = 0;
	n[0] = 2; l = 1;
	for(i = 1; i < MAXN; i++){
		dupl();
	}
	for(i = 0; i < l; i++){
		m += n[i];
	}
	cout << m << endl;
}
