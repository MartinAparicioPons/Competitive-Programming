#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
	#define endl "\n"
#else
	#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
	#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
	#define EL cerr << endl;
#endif
#define EPS 1e-11
#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) | (1<<(x)))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))

using namespace __gnu_pbds;
using namespace std;		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 200010;

pair<pair<int,int>, int> I[MX];

typedef tree<
  int,
  null_type,
  less<int>,
  rb_tree_tag,
  tree_order_statistics_node_update> leqset;
			

main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j, n, R[MX];
	while(cin >> n){
		leqset Leqset;
		for(i = 0; i < n; i++) {
			cin >> I[i].X.X >> I[i].X.Y;
			I[i].Y = i;
			R[i] = 0;
		}
		sort(I, I+n);
		for(i = 0; i < n; i++){
			Leqset.insert(I[i].X.Y);
		}
		for(i = 0; i < n; i++){
			Leqset.erase(I[i].X.Y);
			R[I[i].Y] = Leqset.order_of_key(I[i].X.Y);
		}
		for(i = 0; i < n; i++) cout << R[i] << endl;
	}
}

