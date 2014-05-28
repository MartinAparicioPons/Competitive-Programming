#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<set>
#include<cmath>
#define MOD 1000000007
using namespace std;

int dp[1001][1001];

int g(int n, int k){
	if(dp[n][k] == -1){
		dp[n][k] = g(n, k-1);
		if(n >= k) dp[n][k] = (dp[n][k] + g(n-k,k))%MOD;
	}	
	return(dp[n][k]);
}


int main(){
	int n, tot=0;
	cin >> n;
	memset(dp, -1, sizeof(dp));
	dp[0][0] = 1;
	for(int i = 1; i<1001; i++) dp[i][0] = 0;
	for(int i = 1-n%2; i<n; i+=2){
		tot= (tot+g(n-i, i))%MOD;
	}
	printf("%d\n", tot);
}