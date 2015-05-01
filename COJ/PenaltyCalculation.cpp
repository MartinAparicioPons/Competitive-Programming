#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
#define F first
#define S second

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 101;


int main(){
	ios_base::sync_with_stdio(0); cin.tie();
	pair<int, string> A[MAXN];
	int i, n, x;
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> A[i].F >> A[i].S;
	}
	sort(A, A+n);
	for(i = x = 0; i < n; i++){
		if(A[i].S == "AC"){
			break;
		} else {
			x += 20;
		}
	}
	if(A[i].S != "AC") x = 0;
	else x += A[i].F;
	cout << x << endl;
}
