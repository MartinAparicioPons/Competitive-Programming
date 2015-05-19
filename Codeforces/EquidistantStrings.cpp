#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl
#define F first
#define S second

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef vector<ii> vii;
const static int MAXN = 100010;

int main(){        
	ios_base::sync_with_stdio(0); cin.tie(0);
	string A, B;
	int i, n, d = 0, d1, d2, a1, a2;
	cin >> A >> B;
	n = A.size();
	for(i = 0; i < n; i++){
		d += A[i] != B[i];
	}
	if(d % 2 == 1){
		cout << "impossible\n";
		return 0;
	}
	d1 = d2 = d/2;
	a1 = a2 = 0;
	for(i = 0; i < n; i++) {
		if(A[i] != B[i]) {
			if(a1 < d1){
				a1++;
				cout << A[i];
			} else if(a2 < d2){
				a2++;
				cout << B[i];
			} else 	cout << "T";
		} else cout << A[i];
	}
	cout << endl;
}
