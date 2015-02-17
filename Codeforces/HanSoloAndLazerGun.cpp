#include <bits/stdc++.h>
using namespace std;

const ld INF = 9000000000.0;
typedef long double ld;

int main(){
	ios_base::sync_with_stdio(0);
	int n, x, y, i;
	ld l, ax, ay;
	set<ld> S;
	cin >> n >> x >> y;
	for(i = 0; i < n; i++){
		cin >> ax >> ay;
		if(ay == y){
			l = 0.0;
		} else if(ax == x){
			l = INF;
		} else {
			l = ((ld)y-ay)/((ld)x-ax);
		}
		S.insert(l);
	}
	cout << (int) S.size() << endl;
}
