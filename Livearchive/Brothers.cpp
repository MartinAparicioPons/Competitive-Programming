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
const static int MAXN = 110;

int M[MAXN][MAXN][2], Mov[2][4]={{1,0,-1,0},{0,1,0,-1}}, r, c;

bool valid(int i, int j){
	return i >= 0 && i < r && j >= 0 && j < c;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, k, i, j, l, o;
	while(cin >> n >> r >> c >> k, n+k+r+c!=0){
		for(i = 0; i < r; i++){
			for(j = 0; j < c; j++){
				cin >> M[i][j][0];
				M[i][j][1] = M[i][j][0];
			}
		}
		int d = 0;
		for(l = 0; l < k; l++){
			for(i = 0; i < r; i++){
				for(j = 0; j < c; j++){
					M[i][j][d^1] = M[i][j][d];
				}
			}
			for(i = 0; i < r; i++){
				for(j = 0; j < c; j++){
					for(o = 0; o < 4; o++){
						if(!(valid(i+Mov[0][o],j+Mov[1][o]))) continue;
						if(M[i][j][d] == M[i+Mov[0][o]][j+Mov[1][o]][d] - 1
							|| (M[i][j][d] ==n-1 && M[i+Mov[0][o]][j+Mov[1][o]][d] == 0)){
							M[i+Mov[0][o]][j+Mov[1][o]][d^1] = M[i][j][d];
						}
					}
				}
			}
			d ^= 1;
		}
		for(i = 0; i < r; i++){
			for(j = 0; j < c; j++){
				cout << M[i][j][d] << " \n"[j==c-1];
			}
		}
	}
}
