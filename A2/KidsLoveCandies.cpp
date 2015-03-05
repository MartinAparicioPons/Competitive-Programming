#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 110;

int main(){
	ios_base::sync_with_stdio(0);
	int t, n, k, a, r;
	
	cin >> t;
	while(t--){
		cin >> n >> k;
		r = 0;
		while(n--){
			cin >> a;
			r += a/k;
		}
		cout << r << endl;
	}
}
