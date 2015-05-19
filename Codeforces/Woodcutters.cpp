#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl
#define F first
#define S second

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef vector<ii> vii;
const static int MAXN = 100030;

int main(){        
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, i, X[MAXN], H[MAXN], r = 0;
	cin >> n;
	X[0] = INT_MIN; H[0] = 1;
	for(i = 1; i <= n; i++){
		cin >> X[i] >> H[i];
	}
	X[n+1] = INT_MAX; H[n+1] = 1;
	for(i = 0; i < n; i++){
		if(X[i] - H[i] > X[i-1]){
			r++;
		} else if(X[i] + H[i] < X[i+1]){
			r++;
			X[i] = X[i] + H[i];
		}
	}
	cout << r << endl;
	
}
