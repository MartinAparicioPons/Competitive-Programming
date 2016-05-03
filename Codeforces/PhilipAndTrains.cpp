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

int n;
bool T[MAXN][4];
string M[4];
int Vis[MAXN][4];

int can(int i, int j){
	if(j >= 3 || j < 0) return 0;
	if(i >= n) return 1;
	int k = i;
	if(Vis[i][j] != -1) return Vis[i][j];
	if(i){
		if(T[i][j] || T[i+1][j] || T[i+2][j]) return Vis[k][j] = 0;
		i+=2;
	}
	if(i >= n) return Vis[k][j] = 1;
	if(T[i][j] || T[i+1][j]) return Vis[k][j] = 0;
	i++;
	return Vis[k][j] = can(i, j) || can(i, j+1) || can(i, j-1);
}

int main() {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j, t;
	cin >> t;
	while(t--){
		cin >> n >> i;
		memset(Vis, ~0, sizeof Vis);
		memset(T, 0, sizeof T);
		ii ini;
		for(i = 0; i < 3; i++){
			cin >> M[i];
		}
		for(i = 0; i < M[0].size(); i++){
			for(j = 0; j < 3; j++){
				if(M[j][i] == 's') ini = {i, j};
				T[i][j] = M[j][i] != '.' && M[j][i] != 's';
			}
		}
		if(can(ini.X, ini.Y)) cout << "YES\n";
		else cout << "NO\n";
	}
}

