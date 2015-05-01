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
	int T, tc = 1, n, a, i, m;
	string S;
	for(cin >> T; tc <= T; tc++){
		cin >> n >> S;
		a = m = 0;
		for(i = 0; i <= n; i++){
			if(a < i){
				m++;
				a += 1 + S[i] - '0';
			} else {
				a += S[i] - '0';
			}
		}
		printf("Case #%d: %d\n", tc, m);
	}
}
