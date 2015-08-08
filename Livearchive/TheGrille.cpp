#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
const static int MAXN = 1010;

string M[MAXN], C[MAXN], R;
int n;

void rotate(){
	int i, j;
	for(i = 0; i < n; i++) for(j = i; j < n; j++) swap(C[i][j], C[j][i]);
	for(i = 0; i < n; i++) reverse(C[i].begin(), C[i].end());
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j;
	while(cin >> n, n){
		for(i = 0; i < n; i++) cin >> C[i];
		for(i = 0; i < n; i++) cin >> M[i];
		R = "";
		for(int k = 0; k < 4; k++){
			for(i = 0; i < n; i++) for(j = 0; j < n; j++) 
				if(C[i][j] == 'O') R += M[i][j];
			rotate();
		}
		cout << R << "\n";
	}
	return 0;
}
