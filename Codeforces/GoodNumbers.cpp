#include <bits/stdc++.h>
#define for0(i, n) for(i = 0; i < n; i++)
#define for1(i, n) for(i = 1; i <= n; i++)
#define fora(i, a, n) for(i = a; i < n; i++)
#define dprc(x) printf("| %c\n", x)
#define dprd(x) printf("| %d\n", x)
#define dprd2(x,y) printf("| %d %d\n", x, y)
#define NL() printf("\n")
#define MP make_pair
#define MT(x, y, z) _MP(_MP(x, y), z)
#define MTi(x, y, z) _MP(x, _MP(y, z))
#define X first
#define Y second
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef unsigned long long ull;

int main() {
	int n, k, i, r=0, j;
	string in;
	cin >> n >> k;
	for(;n--;){
		cin >> in;
		bool ok[11], okk = true;
		for0(i,10) ok[i]=false;
		for(j = 0; j < in.size(); j++){
			ok[in[j]-'0'] = true;
		}
		for(i = 0; i <= k; i++) if(!ok[i]) okk=false;
		r+=okk;
	}
	cout << r << endl;
}

