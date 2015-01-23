#include <bits/stdc++.h>
using namespace std;


double dis(long long  dX0, long long  dY0, long long  dX1, long long  dY1) {
    return sqrt((dX1 - dX0)*(dX1 - dX0) + (dY1 - dY0)*(dY1 - dY0));
}
int main(){
	ios_base::sync_with_stdio(0);
	long long  r, x, y, xx, yy;
	double aux;
	cin >> r >> x >> y >> xx >> yy;
	aux = dis(x,y,xx,yy);
	printf("%d\n", (int)ceil((aux/2.0)/r));
}

