#include <bits/stdc++.h>
using namespace std;

// Facebook Hacker Cup 2015

int n, g[3], a[21][3];

bool solve(int mask){
	int r[3] = {0, 0, 0};
	for(int i = 0; i < n; i++){
		if(mask & (1 << i)){
			r[0] += a[i][0];
			r[1] += a[i][1];
			r[2] += a[i][2];
		}
	}
	return r[0] == g[0] && r[1] == g[1] && r[2] == g[2];
}

int main(){
	int T, t, i, j, mask;
	bool solved;
	cin >> T;
	for(t = 1; t <= T; t++){
		cin >> g[0] >> g[1] >> g[2];
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> a[i][0] >> a[i][1] >> a[i][2];
		}
		solved = false;
		for(mask = 1; mask < (1 << n); mask++){
			if(solve(mask)){
				solved = true;
			}
		}
		if(solved){
			printf("Case #%i: yes\n", t);
		} else {
			printf("Case #%i: no\n", t);
		}
	}
}
