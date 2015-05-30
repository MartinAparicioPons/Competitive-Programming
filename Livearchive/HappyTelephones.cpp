#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl
#define F first
#define S second
using namespace std;

typedef long long ll;
typedef pair<int, int> ii; 
typedef vector<int> vi;
const static int MAXN = 100100;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, m, i, j, r;
	ii aux, A[MAXN];
	while(cin >> n >> m, n || m) {
		for(i = 0; i < n; i++){
			cin >> aux.F >> aux.S >> A[i].F >> A[i].S;
			A[i].S += A[i].F;
		}
		for(i = 0; i < m; i++){
			cin  >> aux.F >> aux.S;
			aux.S += aux.F;
			for(j = r = 0; j < n; j++){
				if(A[j].F < aux.S && A[j].S > aux.F){
					r++;
				}
			}
			cout << r << endl;
		}
	}
}
