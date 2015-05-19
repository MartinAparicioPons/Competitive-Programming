#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl
#define F first
#define S second

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef vector<ii> vii;
const static int MAXN = 100030;

ll n, i, j, r, m;
vector<ll> T;

int main(){        
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> j;
		T.push_back(j);
	}
	sort(T.begin(), T.end());
	
	for(i = 0; i < n; i++){
		if(m <= T[i]){
			m += T[i];
			r++;
		}
	}
	cout << r << endl;
}
