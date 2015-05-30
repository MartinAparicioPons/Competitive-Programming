#include <bits/stdc++.h>
#define EPS 1e-9
#define DEBUG(x) cerr << "#" << (#x) << ": " << (x) << endl
const double PI = 2.0*acos(0.0);
 
#define INF 1000000000
 
using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef vector<ii> vii;		typedef vector<iii> viii;

int n, m, ans, p1, p2, i;
string op;

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0);
	bool first = true;
	while (cin>>n, n) {
		if(!first) cout << endl;
		first = false;
		
		p1 = p2 = 0;
		for (i=0; i<n; i++) {
			cin>>op>>m;
			if (op[0] == 'D') {
				p1 += m;
				cout << "DROP 1 " << m << endl;
			} else {
				if(p2 == 0){
					cout << "MOVE 1->2 " << p1 << endl;
					swap(p1, p2);
					p2 -= m;
					cout << "TAKE 2 " << m << endl;
				} else if(p2 < m) {
					cout << "TAKE 2 " << p2 << endl;
					cout << "MOVE 1->2 " << p1 << endl;
					m -= p2;
					p2 = p1 - m;
					p1 = 0;
					cout << "TAKE 2 " << m << endl;
				} else {
					p2 -= m; 
					cout << "TAKE 2 " << m << endl;
				}
			}
		}
	}
	
	
	return 0;
}
