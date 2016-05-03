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
const static int MAXN = 15;

char M[MAXN][MAXN];
int n, m, a, Mov[2][4] = {{-1, 0, 1, 0}, {0, 1, 0, -1}};
bool V[MAXN][MAXN][4] = {false}, P[MAXN][MAXN] = {false};

int toint(char c) {
	if(c == 'U') return 0;
	if(c == 'R') return 1;
	if(c == 'D') return 2;
	return 3;
}

bool valid(int x, int y){
	return x < n && x >= 0 && y < m && y >= 0 && M[x][y] == '.';
}

void simu(int x, int y, int d){
	V[x][y][d] = true;
	P[x][y] = true;
	int dx = x + Mov[0][d];
	int dy = y + Mov[1][d];
	int cont = 0;
	while(!valid(dx, dy) && cont < 10){
		dx -= Mov[0][d];
		dy -= Mov[1][d];
		cont++;
		d = (d+1)%4;
		V[x][y][d] = true;
		dx += Mov[0][d];
		dy += Mov[1][d];
	}
	if(cont < 10 && !V[dx][dy][d]) simu(dx, dy, d);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	a = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> M[i];
	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) if(M[i][j] != '.' && M[i][j] != '*'){
		int d = toint(M[i][j]);
		M[i][j] = '.';
		simu(i, j, d);
	}
	for(int i = 0; i < n; i++) for(int j = 0; j < m; j++){
		a += P[i][j];
	}
	cout << a << endl;
}
