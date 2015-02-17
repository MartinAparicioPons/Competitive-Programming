#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 110, INF = 2500000;

int n, m, i, j, a, b;
bool A[MAXN], B[MAXN], r;

int main(){
	ios_base::sync_with_stdio(0);
	
	cin >> n >> m;
	cin >> a;
	while(a--){
		cin >> b;
		A[b] = true;
	}
	cin >> a;
	while(a--){
		cin >> b;
		B[b] = true;
	}
	
	for(i = a = b = 0; i < INF; i++, a=(a+1)%n, b=(b+1)%m){
		if(A[a] || B[b]){
			A[a] = B[b] = true;
		}
	}
	r = true;
	for(i = 0; i < n; i++) if(!A[i]) r = false;
	for(i = 0; i < m; i++) if(!B[i]) r = false;
	if(r) cout << "Yes\n";
	else  cout << "No\n";
}
