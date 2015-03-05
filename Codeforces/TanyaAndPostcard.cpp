#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 300;

int A[MAXN], B[MAXN];

int main(){
	ios_base::sync_with_stdio(0);
	memset(A, 0, sizeof A);
	memset(B, 0, sizeof B);
	string a, b;
	int i, k, l, Y, X;
	Y = X = 0;
	cin >> a >> b;
	for(i = 0; i < a.size(); i++){
		A[a[i]]++;
	}
	for(i = 0; i < b.size(); i++){
		B[b[i]]++;
	}
	for(i = 0; i < MAXN; i++){
		k = min(A[i], B[i]);
		A[i] -= k;
		B[i] -= k;
		X += k;
	}
	for(i = 0; i < MAXN-32; i++){
		k = min(A[i], B[i+32]);
		l = min(A[i+32], B[i]);
		if(k > l){
			A[i] -= k;
			B[i+32] -= k;
			Y += k;
		} else {
			k = l;
			A[i+32] -= k;
			B[i] -= k;
			Y += k;
		}
	}
	cout << X << " " << Y << endl;
}
