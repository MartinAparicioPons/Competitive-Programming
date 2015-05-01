#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
 
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const ull MAXN = 1000000;
 
bitset<MAXN> C;
 
vector<int> P;
 
void primes(){
	int i, j;
	C.reset();
	C[1] = 1; C[2] = 0; P.push_back(2);
	for(i = 4; i < MAXN; i+=2) C[i] = 1;
	for(i = 3; i < MAXN; i+=2){
		if(!C[i]){
			P.push_back(i);
			for(j = i+i; j < MAXN; j+=i){
				C[j] = 1;
			}
		}
	}
	sort(P.begin(), P.end());
}
 
int main(){
	ios_base::sync_with_stdio(0);
	primes();
	ull i = 1, x = 0, y, k = 0;
	map<int, int> F;
	while(k <= 500){
		F.clear();
		x += i++;
		y = x;
		while(y > 1){
			for(auto z : P){
				if(y % z == 0){
					F[z]++;
					y /= z;
					break;
				}
			}
		}
		k = 1;
		for(auto z : F){
			k *= z.second + 1;
		}
	}
	cout << x << endl;
}
