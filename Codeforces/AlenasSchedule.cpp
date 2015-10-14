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
	
int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int n, r, a, b, c, i, j, B[MAXN];
	cin >> n;
	for(i = 0; i < n; i++) cin >> B[i];
	i = 0; a = 0;
	while(n >= 0 && !B[n-1]) n--;
	i = 0;
	while(i < n && !B[i]) i++, a++;
	for(; i + 1 < n; i++){
		if(!B[i] && !B[i+1]) {
			while(i < n && !B[i]){
				a++; i++;
			}
		}
	}
	cout << n - a << endl;
}
