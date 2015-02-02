#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100010;
typedef long long ll;

int A[MAXN], n, i, j, k;

int main() {
	ios_base::sync_with_stdio(0);
	cin >> n >> k;
	k--;
	for(i = 0; i + 1 < n; i++){
		cin >> A[i];
	}
	i = 0;
	while(i < n && i < k){
		if(i == k || A[i] == 0) break;
		i = i + A[i];
	}
	if(i == k) printf("YES\n");
	else printf("NO\n");
}
