#include <bits/stdc++.h>
using namespace std;

int T, n, a, i, j, s;
vector<int> v[2];

int main(){
	ios_base::sync_with_stdio(0);
	cin >> T;
	while(T--){
		cin >> n;
		s = 0;
		for(i = 0; i < n; i++){
			cin >> a;
			v[s].push_back(a);
		}

		for(i = 31; i >= 0; i--){
			for(j = 0; j < v[s].size(); j++){
				if(v[s][j] & (1<<i)){
					v[s^1].push_back(v[s][j]);
				}
			}

			if(v[s^1].size() >= 2){
				v[s].clear();
				s ^= 1;
			} else v[s^1].clear();
		}
		if(v[s].size() >= 2){
			cout << (v[s][0] & v[s][1]) << endl;
		} else {
			cout << 0 << endl;
		}
		v[s].clear(); v[s^1].clear();
	}
}
