#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10010;

int tri[MAXN], rsq[MAXN];

int main(){
	int i, n;
	cin >> n;
	for(i = 1; i < MAXN; i++){
		tri[i] = tri[i-1] + i;
	}
	for(i = 1; i < MAXN; i++){
		rsq[i] = tri[i] + rsq[i-1];
		if(rsq[i] > n){
			cout << i-1 << endl;
			return 0;
		}
	}
	cout << -1;
}
