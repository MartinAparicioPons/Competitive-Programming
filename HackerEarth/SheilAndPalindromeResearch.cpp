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
const static int MAXN = 100005;

int ft[30][MAXN], n;
void update (int pos, int val, int c) {
  for (; pos<=n; pos+=(pos&(-pos))) ft[c][pos] += val;
}
int query (int pos, int c) {
  int ans = 0;
  for (; pos>0; pos-=(pos&(-pos))) ans += ft[c][pos];
  return ans;
}
int query (int a, int b, int c) {
  return query(b, c) - query(a-1, c);
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	memset(ft, 0, sizeof ft);
	int q, i, a, b;
	cin >> n >> q;
	string S;
	char c;
	cin >> S;
	for(i = 1; i <= n; i++){
		update(i, 1, S[i-1] - 'a');
	}
	while(q--){
		int k;
		cin >> k;
		if(k == 1){
			cin >> a >> c;
			update(a, -1, S[a-1]-'a');
			S[a-1] = c;
			update(a, 1, c-'a');
		} else {
			cin >> a >> b; if(a > b) swap(a,b);
			bool ok = true, pr = true;
			for(i = 0; i <= 'z'-'a'; i++){
				if(query(a, b, i) % 2 == 1){
					if(pr){
						pr = false;
					} else {
						ok = false;
						break;
					}
				}
			}
			if(ok) cout << "yes\n";
			else cout << "no\n";
		}
	}
}


