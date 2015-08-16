#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl;

#define F first
#define S second
#define PB push_back
#define EB emplace_back

using namespace std;
typedef unsigned long long ull; 
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef pair<string, string> ss;
const static int MAXN = 1100;

map<int, int> M;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, m, i, j, mi, mini, a;
	cin >> n >> m;
	for(i = 0; i < m; i++){
		mi = -1;
		for(j = 0; j < n; j++){
			cin >> a;
			if(a > mi){
				mini = j+1;
				mi = a;
			}
		}
		M[mini]++;
	}
	mi = -1;
	for(auto x : M){
		if(x.second > mi){
			mini = x.first;
			mi = x.second;
		}
	}
	cout << mini << endl;
	
}
