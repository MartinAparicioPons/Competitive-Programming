#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int T, tc;
	double c, x, f, p, e, R, P;
	cin >> T;
	for(tc = 1; tc <= T; tc++){
		cin >> c >> f >> x;
		p = 2.0; e = 0.0; R = x/p; P = R;
		while(P >= R){
			e += c/p;
			p += f;
			P = R;
			R = (x/p)+e;
		}
		printf("Case #%d: %.7f\n", tc, P);
	}
}
