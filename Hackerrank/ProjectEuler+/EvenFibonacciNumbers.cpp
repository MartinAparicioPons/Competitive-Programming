#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
const static ll MAXN = 105;

ll F[MAXN];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int T, i;
	F[1] = 1;
	for(i = 2; i < MAXN; i++){
		F[i] = F[i-1] + F[i-2];
	}
	
	cin >> T;
	while(T--){
		ll n, r = 0;
		cin >> n;
		for(i = 1; F[i] <= n; i++){
			if(F[i]%2 == 0) r += F[i];
		}
		cout << r << endl;
	}
}
