#include <bits/stdc++.h>
using namespace std;

const int MAXN = 30003, L = 512, D = 30000, OFF = 256;

int N, S, V[MAXN], DP[L][MAXN];

int rec(int l, int d){
	if(S+l <= 0 || d > D || d < 0) return 0;
	if(DP[l+OFF][d] == -1) {
		DP[l+OFF][d] = V[d] + max(max(rec(l-1, d+S+l-1), rec(l, d+S+l)), rec(l+1, d+S+l+1));
	}
	return DP[l+OFF][d];
}

int main(){
	ios_base::sync_with_stdio(0);
	int d, i, p;
	memset(DP, ~0, sizeof DP);
	cin >> N >> S;
	for(i = 0; i < N; i++){
		cin >> p;
		V[p]++;
	}
	cout << rec(0, S) << endl;
}
