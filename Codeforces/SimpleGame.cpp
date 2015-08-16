#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
 
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
const static int MAXN = 1020, inf = INT_MAX;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m;
    while(cin >> n >> m){
		if(m == n && m == 1) {
			cout << 1 << endl;
		} else if(m == n) {
			cout << m-1 << endl;
		} else if(m == 1) {
			cout << m+1 << endl;
		} else {
			if(m <= n/2){
				cout << m+1 << endl;
			} else {
				cout << m-1 << endl;
			}
		}
	}
}
