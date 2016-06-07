#include <bits/stdc++.h>
#ifdef ONLINE_JUDGE
	#define DB(x) 
	#define DBL(x) 
	#define EL 
	#define endl "\n"
#else
	#define DB(x) cerr << "#" << (#x) << ": " << (x) << " ";
	#define DBL(x) cerr << "#" << (#x) << ": " << (x) << endl;
	#define EL cerr << endl;
#endif
#define EPS 1e-11
#define X first
#define Y second
#define PB push_back
#define SQ(x) ((x)*(x)) 

#define GB(m, x) ((m) & (1<<(x)))
#define SB(m, x) ((m) | (1<<(x)))
#define CB(m, x) ((m) & (~(1<<(x))))
#define TB(m, x) ((m) ^ (1<<(x)))

using namespace std;		typedef string string;
typedef long double ld;		typedef unsigned long long ull; 
typedef long long ll;       typedef pair<ll, ll> ii;
typedef pair<int, ii> iii;  typedef vector<int> vi;
typedef vector<ii> vii;     typedef vector<vi> vvi;
typedef vector<ll> vll;     typedef pair<string, string> ss;
const static ll MX = 510;

#define MIN first
#define MAX second
#define MIN_NEUTRAL (INT_MAX)
#define MAX_NEUTRAL (INT_MIN)
typedef pair<int, int> data;

data T[4*MX][4*MX];
int A[MX][MX], n;

inline data join (data a, data b) {
	return {min(a.MIN, b.MIN), max(a.MAX, b.MAX)};
}

void build_y (int vx, int lx, int rx, int vy, int ly, int ry) {
	if(ly == ry)
		if(lx == rx) T[vx][vy] = {A[lx][ly], A[lx][ly]};
		else 		 T[vx][vy] = join(T[vx*2][vy], T[vx*2+1][vy]);
	else {
		int mid = (ly + ry) / 2;
		build_y(vx, lx, rx, vy * 2, ly   , mid);
		build_y(vx, lx, rx, vy*2+1, mid+1, ry);
		T[vx][vy] = join(T[vx][vy*2], T[vx][vy*2+1]);
	}
}

void build_x (int vx, int lx, int rx){
	if(lx != rx) {
		int mid = (lx + rx) / 2;
		build_x(vx * 2, lx   , mid);
		build_x(vx*2+1, mid+1, rx);
	} 
	build_y(vx, lx, rx, 1, 0, n-1);
}

int min_y(int vx, int vy, int qly, int qry, int ly, int ry) {
	if(ly > ry) return MIN_NEUTRAL;
	if(ly == qly && qry == ry) return T[vx][vy].MIN;
	int qmy = (qly + qry) / 2;
	return min(min_y(vx, vy * 2, qly  , qmy, ly            , min(ry, qmy)),
			   min_y(vx, vy*2+1, qmy+1, qry, max(ly, qmy+1), ry));
}

int min_x(int vx, int qlx, int qrx, int lx, int rx, int ly, int ry) {
	if(lx > rx) return MIN_NEUTRAL;
	if(lx == qlx && qrx == rx) return min_y(vx, 1, 0, n-1, ly, ry);
	int qmx = (qrx + qlx) / 2;
	return min(min_x(vx * 2, qlx  , qmx, lx            , min(rx, qmx), ly, ry),
			   min_x(vx*2+1, qmx+1, qrx, max(lx, qmx+1), rx          , ly, ry));
}

int max_y(int vx, int vy, int qly, int qry, int ly, int ry) {
	if(ly > ry) return MAX_NEUTRAL;
	if(ly == qly && qry == ry) return T[vx][vy].MAX;
	int qmy = (qly + qry) / 2;
	return max(max_y(vx, vy * 2, qly  , qmy, ly            , min(ry, qmy)),
			   max_y(vx, vy*2+1, qmy+1, qry, max(ly, qmy+1), ry));
}

int max_x(int vx, int qlx, int qrx, int lx, int rx, int ly, int ry) {
	if(lx > rx) return MAX_NEUTRAL;
	if(lx == qlx && qrx == rx) return max_y(vx, 1, 0, n-1, ly, ry);
	int qmx = (qrx + qlx) / 2;
	return max(max_x(vx * 2, qlx  , qmx, lx            , min(rx, qmx), ly, ry),
			   max_x(vx*2+1, qmx+1, qrx, max(lx, qmx+1), rx          , ly, ry));
}

void update_y (int vx, int lx, int rx, int vy, int ly, int ry, int x, int y, int v){
	if(ly == ry){
		if(lx == rx) T[vx][vy] = {v, v};
		else 		 T[vx][vy] = join(T[vx*2][vy], T[vx*2+1][vy]);
	} else {
		int mid = (ly + ry) / 2;
		if(y <= mid) { 
			update_y(vx, lx, rx, vy * 2, ly   , mid, x, y, v);
		} else {
			update_y(vx, lx, rx, vy*2+1, mid+1, ry , x, y, v);
		}
		T[vx][vy] = join(T[vx][vy*2], T[vx][vy*2+1]);
	}
}

void update_x(int vx, int lx, int rx, int x, int y, int v){
	if(lx != rx){
		int mid = (lx + rx) / 2;
		if(x <= mid) update_x(vx * 2, lx   , mid, x, y, v);
		else 		 update_x(vx*2+1, mid+1, rx , x, y, v);
	}
	update_y(vx, lx, rx, 1, 0, n-1, x, y, v);
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int i, j, q, x, y, v;
	ii a, b;
	char p;
	cin >> n;
	for(i = 0; i < n; i++) for(j = 0; j < n; j++) cin >> A[i][j];
	build_x(1, 0, n-1);
	
	cin >> q;
	while(q--) {
		cin >> p;
		if(p == 'q'){
			cin >> a.X >> a.Y >> b.X >> b.Y;
			a.X--; a.Y--; b.X--; b.Y--;
			if(a > b) swap(a, b); 
			cout << max_x(1, 0, n-1, a.X, b.X, a.Y, b.Y) << " "
				 << min_x(1, 0, n-1, a.X, b.X, a.Y, b.Y) << endl;
		} else {
			cin >> x >> y >> v;
			x--; y--;
			A[x][y] = v;
			update_x(1, 0, n-1, x, y, v);
		}
	}
}

