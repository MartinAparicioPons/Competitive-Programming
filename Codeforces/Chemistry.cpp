#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 100010;

int main(){
	ios_base::sync_with_stdio(0);
	int n, q, i, j;
	ll S[MAXN], A[MAXN], e, l, u, t, s;
	while(cin >> n >> q, n||q){
		S[0] = 0;
		for(i = 0; i < n; i++){
			cin >> A[i];
			S[i+1] = S[i] + A[i];
		}
		while(q--){
			cin >> t;
			e = s = 100000000000000L;
			for(i = 0; i < n-1; i++){
				for(j = i; j < n; j++){
					if(abs(abs(S[j+1] - S[i]) - t) < e){
						e = abs(abs(S[j+1] - S[i]) - t);
						s = abs(S[j+1] - S[i]);
						l = i; u = j;
					}
				}
			}
			cout << s << " " << l+1 << " " << u+1 << endl;
		}
	}
}
