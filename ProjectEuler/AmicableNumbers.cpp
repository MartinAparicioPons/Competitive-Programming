#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
 
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 10000;

int sumOfDivisors(int n){
	int r = 0, i;
	for(i = 1; i < n; i++){
		if(n % i == 0) r += i;
	}
	return r;
}

int main(){
	ios_base::sync_with_stdio(0);
	int i, j, R = 0;
	for(i = 1; i <= MAXN; i++){
		j = sumOfDivisors(i);
		if(sumOfDivisors(j) == i && i != j){
			R += i + j;
		}
	}
	cout << R/2 << endl;
}
