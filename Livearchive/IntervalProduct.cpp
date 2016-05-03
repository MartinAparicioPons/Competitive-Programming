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


using namespace std;
typedef long double ld; 	typedef unsigned long long ull; 
typedef long long ll;		typedef pair<int, int> ii;
typedef pair<int, ii> iii;	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef vector<string> vs;
typedef string string;		typedef set<int> si;
const static int MAXN = 100001;

// BIT
int ft[MAXN], n;
void update (int pos, int val) {
  for (; pos<=n; pos+=(pos&(-pos))) ft[pos] += val;
}
int query (int pos) {
  int ans = 0;
  for (; pos>0; pos-=(pos&(-pos))) ans += ft[pos];
  return ans;
}
int query (int a, int b) {
  return query(b) - query(a-1);
}

int ft2[MAXN];
void update2 (int pos, int val) {
  for (; pos<=n; pos+=(pos&(-pos))) ft2[pos] += val;
}
int query2 (int pos) {
  int ans = 0;
  for (; pos>0; pos-=(pos&(-pos))) ans += ft2[pos];
  return ans;
}
int query2 (int a, int b) {
  return query2(b) - query2(a-1);
}

int main(){
	int k, i, j, a, b;
	char c;
	while(cin >> n >> k){
		memset(ft, 0, sizeof ft);
		memset(ft2, 0, sizeof ft2);
		for(i = 1; i <= n; i++){
			cin >> a;
			if(!a) update2(i, 1);
			if(a < 0) update(i, 1);
		}
		while(k--){
			cin >> c >> a >> b;
			if(c == 'C'){
				if(!b){
					if(query2(a, a) == 0) update2(a, 1);
					if(query(a, a) == 1) update(a, -1);
				} else if(b < 0) {
					if(query2(a, a) == 1) update2(a, -1);
					if(query(a, a) == 0) update(a, 1);
				} else {
					if(query2(a, a) == 1) update2(a, -1);
					if(query(a, a) == 1) update(a, -1);
				}
			} else {
				if(query2(a, b) == 0){
					if(query(a, b) % 2) cout << "-";
					else cout << "+";
				} else {
					cout << "0";
				}
			}
		}
		cout << endl;
	}
}
