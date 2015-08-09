#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl;

#define F first
#define G second
#define PB push_back

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
typedef vector<ll> vll;		typedef pair<string, string> ss;
const static int MAXN = 11;

string B[MAXN];
int M[2][4] = {{1, 1, -1, -1},{1, -1, 1, -1}};

inline bool valid(int i, int j){
	return i >= 0 && i < 10 && j >= 0 && j < 10;
}

int backtrack(int i, int j){
	int k, l, a, k2, l2, r = 0;
	for(a = 0; a < 4; a++){
		k = i + M[0][a];
		l = j + M[1][a];
		k2 = k + M[0][a];
		l2 = l + M[1][a];
		if(valid(k, l) && valid(k2, l2) && B[k][l] == 'B' && B[k2][l2] == '#'){
			B[k][l] = '#';
			r = max(backtrack(k2, l2)+1, r);
			B[k][l] = 'B';
		}
	}
	return r;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int tc, i, j, r;
	cin >> tc;
	while(tc--){
		for(i = 0; i < 10; i++) cin >> B[i];
		r = 0;
		for(i = 0; i < 10; i++){
			for(j = 0; j < 10; j++){
				if(B[i][j] == 'W') {
					B[i][j] = '#';
					r = max(r, backtrack(i, j));
					B[i][j] = 'W';
				}
			}
		}
		cout << r << "\n";
	}
}
