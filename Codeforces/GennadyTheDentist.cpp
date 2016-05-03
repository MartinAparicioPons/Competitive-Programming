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
#define all(xx) xx.begin(), xx.end()
#define hash sdkjfhwieuhoqihfqwekjfhqpqwe

using namespace std;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string; 		typedef set<int> si;
const static int MAXN = 4004;

ll A[MAXN], V[MAXN], D[MAXN], n;

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j;
	cin >> n;
	for(i = 0; i < n; i++) cin >> V[i] >> D[i] >> A[i];
	i = 0; int r = 0;
	vi R; 
	while(i < n){
		if(A[i] >= 0) {
			r++; R.PB(i+1);
			ll ac = V[i], dc = 0;
			for(j = i+1; j < n; j++) if(A[j] >= 0){
				A[j] -= ac + dc;
				if(A[j] < 0) dc += D[j];
				if(ac > 0) ac--;
			}
		}
		i++;
	}
	cout << r << endl;
	for(auto x : R) cout << x << " ";
	cout << endl;
}
