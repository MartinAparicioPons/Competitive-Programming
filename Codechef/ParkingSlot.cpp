#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100010, MAX = 1000000010;
int n, A[MAXN], k;
bool check(int m){
	int t, i, j;
	t = 1;
	for(i = 1, j = 0; i < n; i++){
		if(A[i] - A[j] >= m){
			j = i;
			t++;
		}
	}
	return t >= k;
}

int main(){
	ios_base::sync_with_stdio(0);
	int T, i, j;
	cin >> T;
	while(T--){
		cin >> n >> k;
		for(i = 0; i < n; i++){
			cin >> A[i];
		}
		sort(A, A+n);
		int l = 1, r = MAX, m;
		while(l <= r){
			m = (l+r)/2;
			if(check(m))  l = m+1;
			else 		r = m-1;
		}
		if(check(m)) cout << m << endl;
		else 		 cout << m-1 << endl;
	}
}

