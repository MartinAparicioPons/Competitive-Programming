#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
const int MAXN = 1001;

ll T[2][MAXN], N[2];

int main(){
	ios_base::sync_with_stdio(0);
	ll x, tc = 1;
	int i, j, m;
	while(cin >> N[0] >> N[1] >> m){
		if(!N[0] && !N[1] && !m) return 0;
		memset(T, -1, sizeof T);
		while(m--){
			cin >> x;
			j = 0;
			while(true){
				if(T[j][x % N[j]] == -1){
					T[j][x % N[j]] = x;
					break;
				}
				swap(T[j][x % N[j]], x);
				j ^= 1;
			}
		}
		
		cout << "Case " << tc++ << ":\n";
		vector<ii> V[2];
		for(j = 0; j < 2; j++){
			for(i = 0; i < MAXN; i++){
				if(T[j][i] != -1){
					V[j].push_back(ii(i, T[j][i]));
				}
			}
			if(V[j].size() > 0){
				cout << "Table " << j+1 << endl;
				for(i = 0; i < V[j].size(); i++){
					cout << V[j][i].first << ":" << V[j][i].second << endl;
				}
			}
		}
	}
}
