#include <bits/stdc++.h>
using namespace std;

const int MAXN = 66666;

int main(){
	ios_base::sync_with_stdio(0);
	int n, m, D[MAXN], X[MAXN], i, u, v;
	queue<int> Q;
	cin >> n;
	for(i = m = 0; i < n; i++){
		cin >> D[i] >> X[i];
		m += D[i];
		if(D[i] == 1) Q.push(i);
	}
	cout << m/2 << endl;
	while(!Q.empty()){
		i = Q.front(); Q.pop();
		if(D[i] == 1){
			cout << i << " " << X[i] << endl;
			D[X[i]]--;
			X[X[i]] ^= i;
			if(D[X[i]] == 1) Q.push(X[i]);
		}
	}
}

