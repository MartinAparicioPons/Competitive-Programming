#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll; typedef unsigned long long ull;
typedef ull tint; typedef pair<tint, tint> ii;
const int MAXN = 1000010;

int main(){
	ios_base::sync_with_stdio(0);
	int T, x, y, k, n, p, c;
	bool can;
	cin >> T;
	while(T--){
		cin >> x >> y >> k >> n;
		can = false;
		while(n--){
			cin >> p >> c;
			if(c <= k && p >= x-y) can = true;
		}
		if(can) cout << "LuckyChef\n";
		else 	cout << "UnluckyChef\n";
	}
}
