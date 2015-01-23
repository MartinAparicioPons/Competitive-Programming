#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100100;

int main(){
	ios_base::sync_with_stdio(0);
	long long a[MAXN], rsq[MAXN], res;
	int n, i, T;
	cin >> T;
	while(T--){
		cin >> n;
		cin >> a[0];
		rsq[0] = a[0];
		res = 0;
		for(i = 1; i < n; i++){
			cin >> a[i];
			rsq[i] = rsq[i-1] + a[i];
		}
		for(i = 1; i < n; i++){
			if(rsq[i-1] == rsq[n-1] - rsq[i]){
				res = a[i];
				break;
			}
		}
		if(res) cout << res << endl;
		else 	cout << "NO EQUILIBRIUM\n";
	}
}

