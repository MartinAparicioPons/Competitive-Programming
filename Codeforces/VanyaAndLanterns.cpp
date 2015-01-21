#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1010;

int main(){
	ios_base::sync_with_stdio(0);
	int n, i, l, A[MAXN], d = -123;
	cin >> n >> l;
	for(i = 0; i < n; i++){
		cin >> A[i];
	}
	sort(A, A+n);
	for(i = 1; i < n; i++){
		d = max(d, A[i] - A[i-1]);
	}
	printf("%.10lf\n", max((double)(d/2.0), max((double)A[0], (double)(l-A[n-1]))));
}
