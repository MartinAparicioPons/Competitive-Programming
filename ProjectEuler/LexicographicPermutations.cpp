#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll; typedef unsigned long long ull;
typedef int tint; typedef pair<tint, tint> ii;
const int MAXN = 1000000;

int main(){
	ios_base::sync_with_stdio(0);
	string n = "0123456789";
	int i;
	for(i = 1; i < MAXN; i++){
		next_permutation(n.begin(), n.end());
	}
	cout << n << endl;
}
