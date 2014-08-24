#include <bits/stdc++.h>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define dprd(x) printf("|| %d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define dprd2(x,y) printf("||%d | %d\n", x,y)
#define prnl() printf("\n")
#define prc(c) printf("%c\n", c)
#define for0(i,n) for(i = 0; i < n; i++)
#define for1(i,n) for(i = 1; i <= n; i++)
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define SQ(x) ((x)*(x))
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;

bool isInRadius(int r, int x, int y){
	return r*r >= x*x + y*y;
}

int main(){
	int T, n, rad, x, y, result;
	cin >> T;
	while(T--){
		cin >> n >> rad;
		result = 0;
		for(int i = 0; i < n; i++){
			cin >> x >> y;
			if(isInRadius(rad, x, y)){
				result++;
			}
		}
		cout << result << endl;
	}
}







