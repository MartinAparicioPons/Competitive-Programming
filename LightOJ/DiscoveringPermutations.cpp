#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
#define F first
#define S second

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 110, MAX = INT_MAX;

int main(){
	int T, tc = 1, i, k, n;
	string S;
	cin >> T;
	while(T--){
		printf("Case %d:\n", tc++);
		cin >> n >> k;
		S = "";
		for(i = 0; i < n; i++) S += i+'A';
		do {
			cout << S << endl;
		} while(next_permutation(S.begin(), S.end()) && --k);
	}
}
