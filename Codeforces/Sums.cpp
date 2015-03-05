#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const ll SQRT = 40000, MAXN = 1000000100;

ll tri(ll a){
	return (a*(a-1))/2;
}

int main(){
	ios_base::sync_with_stdio(0);
	ll n, i, T, j, a;
	bool ok;
	set<ll> P2;
	P2.insert(0ll);
	for(i = 1ll; i < MAXN; i*=2ll) P2.insert(i);
	cin >> T;
	while(T--){
		cin >> n;
		if(P2.find(n) != P2.end()){
			cout << "IMPOSSIBLE\n";
			continue;
		}
		ok = false;
		for(i = 2ll; i < SQRT && !ok; i++){
			if((n - tri(i))%i == 0ll){
				a = (n - tri(i))/i;
				if(a*i + tri(i) != n) continue;
				cout << n << " = " << a;
				for(j = 1ll; j < i; j++){
					cout << " + " << a+j;
				}
				cout << endl;
				ok = true;
			}
		}
	}
}
