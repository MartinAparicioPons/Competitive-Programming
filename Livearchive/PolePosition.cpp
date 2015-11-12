#include <bits/stdc++.h>
#ifdef DEBUG
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define EL cerr << endl;
#else
#define DB(x)
#define DBL(x)
#define EL
#endif

#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define hash sdkjfhwieuhoqihfqwekjfhqpqwe

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef set<int> si;
typedef set<ll> sll; 		typedef set<string> ss;
const static int MAXN = 1010;


int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int n, C[MAXN], P[MAXN], i, j, R[MAXN];
	while(cin >> n, n){
		memset(R, 0, sizeof R);
		for(i = 0; i < n; i++){
			cin >> C[i] >> P[i];
		}
		bool ok = true;
		for(i = 0; i < n; i++){
			if(P[i] == 0) R[i] = C[i];
			else {
				if(i+P[i] <= n && i+P[i] >= 0){
					R[i + P[i]] = C[i];
				}
			}
		}
		for(i = 0; i < n; i++){
			if(!R[i]) {
				ok = false;
			}
		}
		if(ok){
			for(i = 0; i < n; i++) cout << R[i] << " \n"[i+1==n];
		} else {
			cout << "-1\n";
		}
	}
}
