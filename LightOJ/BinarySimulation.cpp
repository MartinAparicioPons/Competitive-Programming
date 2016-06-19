//~ #include <ext/pb_ds/assoc_container.hpp>
//~ #include <ext/pb_ds/tree_policy.hpp>
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
#define SB(m, x) ((m) | (1<<(x))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))

//~ using namespace __gnu_pbds;
using namespace std;		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 5000010;

ll n, F[MX];

void _update(ll x, ll v){
	for(; x<=n; x += (x&(-x))) F[x] += v;
}

void update(ll x, ll y){
	_update(x, 1);
	_update(y+1, -1);
}

ll query(ll x){
	ll a = 0ll;
	for(; x > 0; x-=(x&(-x))) a += F[x];
	return a;
}

char S[MX];

int main(){
	//~ ios_base::sync_with_stdio(0); cin.tie(0);
	ll q, i, t, a, b;
	
	char c;
	scanf("%lld", &t);
	for(int tc = 1; tc <= t; tc++){
		scanf("%s", S);
		memset(F, 0, sizeof F);
		n = strlen(S);
		for(i = 1; i <= n; i++) if(S[i-1] == '1') update(i, i);
		printf("Case %d:\n", tc);
		scanf("%lld", &q);
		while(q--){
			scanf("%c", &c);
			scanf("%c", &c);
			if(c == 'I'){
				scanf(" %lld %lld", &a, &b);
				update(a, b);
			} else {
				scanf(" %lld", &a);
				if(query(a) % 2ll) printf("1\n");
				else printf("0\n");
			}
		}
	}
}
