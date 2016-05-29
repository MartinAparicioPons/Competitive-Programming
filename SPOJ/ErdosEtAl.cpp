#include <bits/stdc++.h>
#define EPS 1e-11
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) |= (1<<(x)))
#define CB(m, x) ((m) &= ~(1<<(x)))
#define TB(m, x) ((m) ^= (1<<(x)))

using namespace std; typedef string string;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static ll MX = 200100;


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int a, n, c, i, j, d, E[MX];
	vi G[MX];
	while(cin >> a >> n){
		memset(E, -1, sizeof E);
		for(i = 0; i < MX; i++) G[i].clear();
		for(i = 0; i < a; i++){
			cin >> c;
			for(j = 0; j < c; j++){
				cin >> d;
				G[(d-1)*2].PB(i*2+1);
				G[i*2+1].PB((d-1)*2);
			}
		}
		queue<int> Q;
		Q.push(0);
		E[0] = 0;
		while(Q.size()){
			int x = Q.front(); Q.pop();
			int y = E[x];
			if(x % 2 == 0){
				for(int k : G[x]){
					if(E[k] == -1){
						E[k] = y+1;
						Q.push(k);
					}
				}
			} else {
				for(int k : G[x]){
					if(E[k] == -1){
						E[k] = y;
						Q.push(k);
					}
				}
			}
		}
		int sum = 0, mx = 0, c = 0;
		for(i = 0; i < n; i++){
			if(E[2*i] != -1){
				c++;
				mx = max(mx, E[2*i]);
				sum += E[2*i];
			}
		}
		cout << c << " " << mx << " " << sum << endl;
	}
}
