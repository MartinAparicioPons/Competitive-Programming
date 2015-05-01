#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
#define F first
#define S second

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 101;


int main(){
	ios_base::sync_with_stdio(0); cin.tie();
	map<ull, int> M;
	int T, n, i;
	ull a;
	cin >> T;
	while(T--){
		M.clear();
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> a;
			M[a]++;
		}
		for(auto x : M){
			if(x.S > 1){
				M[x.F*2] += x.S/2;
			}
		}
		cout << (M.rbegin()->F) << endl;
	}
}
