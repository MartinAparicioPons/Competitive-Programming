#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl
 
#define X first
#define Y second
#define PB push_back
#define MP make_pair
 
using namespace std;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;       typedef pair<int, int> ii; 
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 100100;


int main() {
    //ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j, n, a, b, c;
	char k;
	pair<int, char> E[MAXN];
	while(cin >> n, n != 0){
		for(i = 0; i < n; i++){
			scanf("%d:%d:%d", &a, &b, &c);
			cin >> k;
			E[i] = MP(a*60*60+b*60+c, k);
		}
		sort(E, E+n);
		int ee = n/2;
		for(i = 0; i < n; i++){
			if(E[i].Y == 'E') ee--;
		}
		for(i = 0; i < n; i++){
			if(E[i].Y == '?'){
				if(ee) {
					ee--;
					E[i].Y = 'E';
				} else E[i].Y = 'X';
			}
		}
		int c, m;
		c = 0; m = -1;
		for(i = 0; i < n; i++){
			if(E[i].Y == 'E') {
				c++;
				m = max(c, m);
			} else {
				c--;
			}
		}
		cout << m << endl;
	}

}
