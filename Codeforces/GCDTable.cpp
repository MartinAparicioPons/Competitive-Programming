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
const static int MAXN = 50050;

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	multiset<int> M;
	int n, A[505], i, j;
	cin >> n;
	for(i = 0; i < n*n; i++){
		cin >> j;
		M.insert(j);
	}
	int c = 0;
	while(c < n){
		A[c] = *(--M.end());
		DB(A[c]);
		M.erase(--M.end());
		for(i = 0; i < c; i++){
			if(M.find(__gcd(A[i], A[c])) != M.end()){
				M.erase(M.find(__gcd(A[i], A[c])));
			}
			if(M.find(__gcd(A[i], A[c])) != M.end()){
				M.erase(M.find(__gcd(A[i], A[c])));
			}
		}
		c++;
	} EL;
	for(i = 0; i < n; i++) cout << A[i] << " \n"[i+1 == n];
	
}
