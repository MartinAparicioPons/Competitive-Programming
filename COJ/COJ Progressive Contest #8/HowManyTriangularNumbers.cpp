#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
const static int MAXN = 2000100;

ll a, b, T[MAXN]; 

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i; T[0] = 1;
	for(i = 2; i < MAXN - 1; i++){
		T[i-1] = T[i-2] + ((long long)i);
	}
	while(cin >> a >> b, a || b){
		cout << distance(lower_bound(T, T+MAXN, a), 
						 lower_bound(T, T+MAXN, b+1)) << "\n";
	}
}
