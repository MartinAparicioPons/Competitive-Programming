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

int M[MAXN][2], A[MAXN], n;

int calc(int x){
	int i, r = 0;
	for(i = n-2; i >= x; i--) r += M[i][1];
	r += A[x];
	for(; i >= 0; i--) r += M[i][0];
	return r;
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j;
	cin >> n;
	for(i = 0; i < n-1; i++) cin >> M[i][0];
	for(i = 0; i < n-1; i++) cin >> M[i][1];
	for(i = 0; i < n; i++) cin >> A[i];
	int m1, m2;
	m1 = m2 = INT_MAX;
	for(i = 0; i < n; i++) {
		if(m1 >= calc(i)){
			m2 = m1;
			m1 = calc(i);
		} else if(m2 >= calc(i)) m2 = calc(i);
	}
	cout << m1+m2 << endl;
	
}
