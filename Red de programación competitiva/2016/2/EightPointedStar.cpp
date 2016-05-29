#include <bits/stdc++.h>
#define EPS 1e-11
#define EL cerr << endl;
#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
#define PR(x) cout << (x) << endl

#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) |= (1<<(x)))
#define CB(m, x) ((m) &= ~(1<<(x)))
#define TB(m, x) ((m) ^= (1<<(x)))

using namespace std; typedef string string;
typedef unsigned long long ull; typedef long double ld;
typedef long long ll;         typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;    typedef vector<int> vi;
typedef vector<ii> vii;       typedef vector<vi> vvi;
typedef vector<ll> vll;       typedef pair<string, string> ss;
const static ll MX = 1000;

char M[MX][MX];
int n, m;

void diag_lu(int i, int j){
	if(i >= m || j >= m || i < 0 || j < 0) return;
	if(j > 3*n) M[i][j+1] = '\0';
	M[i][j] = '*';
	diag_lu(i+1, j+1);
}


void diag_ru(int i, int j){
	if(i >= m || j >= m || i < 0 || j < 0) return;
	if(j > 3*n) M[i][j+1] = '\0';
	M[i][j] = '*';
	diag_ru(i-1, j+1);
}

void horiz(int i, int j){
	if(i >= m || j >= m || i < 0 || j < 0) return;
	M[i][j] = '*';
	horiz(i, j+1);
}

void verti(int i, int j){
	if(i >= m || j >= m || i < 0 || j < 0) return;
	M[i][j] = '*';
	verti(i+1, j);
}


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j;
	bool ok = false;
	while(cin >> n){
		if(!ok) ok = true;
		else cout << "\n";
		memset(M, 0, sizeof M);
		m = 4*n+1;
		for(i = 0; i < 2*m; i++) for(j = 0; j < 2*m; j++) M[i][j] = ' ';
		verti(0, n);
		verti(0, 3*n);
		horiz(n, 0);
		horiz(3*n, 0);
		diag_lu(n, 0);
		diag_lu(0, n);
		diag_ru(3*n, 0);
		diag_ru(4*n, n);
		for(i = 0; i < m; i++) {
			int mm = 0;
			for(j = 0; j < m; j++){
				if(M[i][j] == '*') mm = j;
			}
			M[i][mm+1] = '\0';
		}
		for(i = 0; i < m; i++){
			cout << M[i];
			if(i+1!=m) cout << "\n";
		}
	}
}
