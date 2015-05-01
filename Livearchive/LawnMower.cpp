#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
#define F first
#define S second

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 1010;

int main(){
	ios_base::sync_with_stdio(0); cin.tie();
	int n, m, i;
	double r, A[MAXN], B[MAXN];
	bool ok;
	while(cin >> n >> m >> r, n || m){
		r /= 2.0;
		for(i = 0; i < n; i++){
			cin >> A[i];
		}
		for(i = 0; i < m; i++){
			cin >> B[i];
		}
		sort(A, A+n);
		sort(B, B+m);

		ok = A[0]-r <= 0.0 && A[n-1]+r >= 75.0;
		ok = ok && B[0]-r <= 0.0 && B[m-1]+r >= 100.0;
		for(i = 1; i < n-1; i++){
			ok = ok && A[i]-r <= A[i-1]+r;
		}
		for(i = 1; i < m-1; i++){
			ok = ok && B[i]-r <= B[i-1]+r;
		}
		printf("%s\n", ok?"YES":"NO");
	}
}
