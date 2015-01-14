#include <bits/stdc++.h>
using namespace std;

#define scd(x) scanf("%d", &x)
#define prd(x) printf("%d\n", x)

// RMQ
// ---

const int MAXN = 100020, LOGMAXN = 20;

int T[MAXN][LOGMAXN], A[MAXN], N;

int rmqQuery(int i, int j){
	int k = (int)floor(log((double)j-i+1) / log(2.0));
	if(T[j-(1<<k)+1][k] == -1) return T[i][k];
	return __gcd(T[i][k], T[j-(1<<k)+1][k]);
}

int query(int l, int r){
	if(r+1 >= N) return rmqQuery(0, l-1);
	if(l <= 0) return rmqQuery(r+1, N-1);
	//cerr << ": " << rmqQuery(0,l-1) << ", " << rmqQuery(r+1, N-1) << endl;
	return __gcd(rmqQuery(0, l-1), rmqQuery(r+1, N-1));
}

int build(){
	int i, j;
	for(i = 0; i < N; i++){
		T[i][0] = A[i];
	}
	for(j = 1; (1<<j) <= N; j++){
		for(i = 0; i + (1<<j) <= N; i++){
			T[i][j] = __gcd(T[i][j-1], T[i+(1<<(j-1))][j-1]);
		}
	}
}

// ---

int main(){
	int q, i, t, l, r;
	scd(t);
	while(t--){
		scd(N); scd(q);
		for(i = 0; i < N; i++){
			scd(A[i]);
		}
		build();
		for(i = 0; i < q; i++){
			scd(l);scd(r);
			prd(query(l-1, r-1));
		}/*
		for(int j = 0; (1<<j) <= N; j++){
			for(i = 0; i < N; i++){
				printf("%d ",T[i][j]);
			}
			cout << endl;
		}*/
	}
}
