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
	int T, tc = 1, x, r, c;
	for(cin >> T; tc <= T; tc++){
		cin >> x >> r >> c;
		if((r*c)%x){
			printf("Case #%d: RICHARD\n", tc);
		} else if(x-1 > r || x-1 > c){
			printf("Case #%d: RICHARD\n", tc);
		} else {
			printf("Case #%d: GABRIEL\n", tc);
		}
	}
}
