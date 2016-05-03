#include <bits/stdc++.h>
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define MP make_pair

using namespace std;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<int, int> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static int MAXN = 110;

int M[MAXN][MAXN], n = 20, o = 5,
	mov[4][4][2] = {{{0, 0},{0, 1},{0, 2},{0, 3}},
					{{0, 0},{1, 0},{2, 0},{3, 0}},
					{{0, 0},{1, 1},{2, 2},{3, 3}},
					{{0, 0},{-1, 1},{-2, 2},{-3, 3}}};


int calc(int i, int j){
	int mx = 0;
	for(int k = 0; k < 4; k++){
		int m = 1;
		for(int p = 0; p < 4; p++){
			int a = i + mov[k][p][0], b = j + mov[k][p][1];
			m *= M[a][b];
		}
		mx = max(mx, m);
	}
	return mx;
}


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j;
	memset(M, 0, sizeof M);
	for(i = o; i < n+o; i++){
		for(j = o; j < n+o; j++){
			cin >> M[i][j];
		}
	}
	int mx = 0;
	for(i = o; i < n+o; i++){
		for(j = o; j < n+o; j++){
			mx = max(mx, calc(i, j));
		}
	}
	cout << mx << endl;
}



