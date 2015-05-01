#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll; typedef unsigned long long ull;
typedef int tint; typedef pair<tint, tint> ii;
const int MAXN = 1415, NUM = 2000000;

bool C[NUM];

ull solve(){
	int i, j; ull sum = 2;
	for(i = 3; i <= MAXN; i+=2){
		if(!C[i]){
			for(j = i+i; j <= NUM; j+=i) C[j] = true;
		}
	}
	for(i = 3; i < NUM; i+=2) if(!C[i]) sum += i;
	return sum;
}

int main(){
	ios_base::sync_with_stdio(0);
	cout << solve() << endl;
}
