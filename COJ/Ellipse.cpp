#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 1000, MINN = -1000;
#define X first
#define Y second
#define SQ(x) ((x)*(x))

long double dis(int x, int y, ii a){
	return sqrt(SQ(x - a.X) + SQ(y - a.Y));
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie();
	int c = 0, x, y;
	long double d;
	ii a, b;
	cin >> a.X >> a.Y >> b.X >> b.Y >> d;
	for(x = MINN; x <= MAXN; x++){
		for(y = MINN; y <= MAXN; y++){
			if(dis(x, y, a) + dis(x, y, b) < d) c++;
		}
	}
	cout << c << endl;
}
