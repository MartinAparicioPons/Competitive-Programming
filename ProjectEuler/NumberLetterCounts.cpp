#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
 
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 1000;

int main(){
	ios_base::sync_with_stdio(0);
	map<int, int> M;
	M[1] = 3;
	M[2] = 3;
	M[3] = 5;
	M[4] = 4;
	M[5] = 4;
	M[6] = 3;
	M[7] = 5;
	M[8] = 5;
	M[9] = 4;
	M[10] = 3;
	M[11] = 6;
	M[12] = 6;
	M[13] = 8;
	M[14] = 8;
	M[15] = 7;
	M[16] = 7;
	M[17] = 9;
	M[18] = 8;
	M[19] = 8;
	M[20] = 6;
	M[30] = 6;
	M[40] = 5;
	M[50] = 5;
	M[60] = 5;
	M[70] = 7;
	M[80] = 6;
	M[90] = 6;
	M[100] = 10;
	
	int r = 0, a, i, p;
	for(i = 1; i < MAXN; i++){
		a = i;
		p = r;
		if(a % 100 == 0){
			r += M[100] + M[a/100] - 3;
			continue;
		}
		if(a > 100){
			r += M[100] + M[a/100];
			a %= 100;
			if(!a) continue;
		}
		if(M.find(a) != M.end()){
			r += M[a];
		} else {
			r += M[(a/10)*10] + M[a%10];
		}
	}
	cout << r + 11 << endl;
}
