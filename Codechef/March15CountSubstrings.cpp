#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll; typedef unsigned long long ull;
typedef int tint; typedef pair<tint, tint> ii;
const int MAXN = 100010;

// 40pts

ll R[2][MAXN];

ll rsq(int i, int j, int o){
	return R[o][i+1] - R[o][j];
}

int main(){
	ios_base::sync_with_stdio(0);
	string in;
	int T, n, q, l, r, i, j; ll k, p;
	cin >> T;
	while(T--){
		cin >> n >> k >> q;
		cin >> in;
		for(i = R[0][0] = R[1][0] = 0; i < n; i++){
			R[0][i+1] = R[0][i] + (in[i] == '0');
			R[1][i+1] = R[1][i] + (in[i] == '1');
		}
		while(q--){
			cin >> l >> r;
			l--;
			p = 0;
			for(i = j = l; i < r;){
				if(rsq(i, j, 0) <= k && rsq(i, j, 1) <= k){
					p += i - j + 1;
					i++;
				} else {
					j++;
				}
			}
			cout << p << endl;
		}
	}
}
