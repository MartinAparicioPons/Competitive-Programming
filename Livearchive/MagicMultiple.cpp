#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

#define F first
#define G second
#define PB push_back

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef pair<string, string> ss;
const static int MAXN = 550;

ll x;
bool vis[11];

void md(){
	ll y = x;
	while(y){
		vis[y%10] = true;
		y /= 10;
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	ll n;
	int i, j;
	while(cin >> n){
		memset(vis, 0, sizeof vis);
		x = n;
		for(i = 1; i < 100; i++){
			md();
			bool ok = true;
			for(j = 0; j < 10; j++) if(!vis[j]) ok = false;
			if(ok) break;
			x+=n;
		}
		cout << i << endl;
	}
}
