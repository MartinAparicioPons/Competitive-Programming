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

int a[2020];
bool cmp(int A, int B){
	return a[A] < a[B];
}

int main() {
	int b[2][2020], c[2020], res[3][2020], i, j, r = 1, n;
	memset(res, -1, sizeof res);
	memset(b, 0, sizeof b);
	cin >> n;
	if(n < 3){
		cout << "NO\n";
		return 0;
	}
	for0(i, n){
		cin >> a[i];
		c[i] = i;
		b[0][a[i]]++;
		b[1][a[i]] = i;
	}
	sort(c, c+n, cmp);
	for(i = 0; i < 2020; i++){
		if(b[0][i] <= 0) continue;
		r*=b[0][i];
		if(r >= 3) break;
		//dprd2(r, b[0][i]);
	}
	if(r < 3){
		cout << "NO\n";
		return 0;
	}
	cout << "YES\n";
	bool h[2]={false};
	for(i = 0; i < n-1; i++){
		res[0][i] = c[i]+1;
		if(a[c[i]] == a[c[i+1]]){
			if(!h[0]){
				res[1][i] = c[i+1]+1;
				res[1][i+1] = c[i]+1;
				h[0] = true;
			} else if(!h[1]) {
				res[2][i] = c[i+1]+1;
				res[2][i+1] = c[i]+1;
				h[1] = true;
			}
		}
		if(res[1][i] == -1) res[1][i] = c[i]+1;
		if(res[2][i] == -1) res[2][i] = c[i]+1;
	}
	res[0][i] = c[i]+1;
	if(res[1][i] == -1) res[1][i] = c[i]+1;
	if(res[2][i] == -1) res[2][i] = c[i]+1;
	for0(i, 3){
		for0(j, n){
			cout << res[i][j] << " ";
		}
		NL();
	}
}
