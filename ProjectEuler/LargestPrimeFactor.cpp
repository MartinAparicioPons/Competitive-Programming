#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll; typedef unsigned long long ull;
typedef int tint; typedef pair<tint, tint> ii;
const int MAXN = 775147;		//sqrt(N)

bool C[MAXN];

int solve(ull n){
	int i, j, m;
	for(i = 2; i < MAXN; i++){
		if(!C[i]){
			if(!(n%i)) n /= i, m = i;
			for(j = i+i; j < MAXN; j+=i) C[j] = true;
		}
	}
	return m;
}

int main(){
	ios_base::sync_with_stdio(0);
	ull N = 600851475143ll;
	cout << solve(N) << endl;
}
