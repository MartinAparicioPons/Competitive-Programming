#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
#define C first
#define R second
#define SQ(x) ((x)*(x))

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
typedef pair<ll, ll> point;
typedef pair<pair<ll, ll>, ll> circle;
const int MAXN = 1010;
circle A[MAXN];
point M[MAXN];			// Movement (fraction)
int D[MAXN]; 			// Direction (0: CW, 1: CCW, -1: N/A)
vector<int> E[MAXN];  	// Edges.

ll gcd(ll a, ll b){
	if(!a) return b;
	return gcd(b%a, a);
}

point trim(point a){
	ll g = gcd(a.X, a.Y);
	a.X /= g;
	a.Y /= g;
	return a;
}

int main(){
	ios_base::sync_with_stdio(0);
	int i, j, T, n;
	bool vis[MAXN];
	queue<int> Q;
	cin >> T;
	while(T--){
		cin >> n;
		M[0].X = M[0].Y = 1;
		D[0] = 0;
		E[0].clear();
		memset(vis, 0, sizeof vis);
		for(i = 0; i < n; i++){
			cin >> A[i].C.X >> A[i].C.Y >> A[i].R;
			E[i].clear();
		}
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if(j == i) continue;
				if(SQ(A[i].R + A[j].R) == SQ(A[i].C.X - A[j].C.X) + SQ(A[i].C.Y - A[j].C.Y)){
					E[i].push_back(j);
					E[j].push_back(i);
				}
			}
		}
		
		Q.push(0);
		vis[0] = true;
		int a;
		while(!Q.empty()){
			a = Q.front(); Q.pop();
			for(i = 0; i < E[a].size(); i++){
				if(vis[E[a][i]]) continue;
				vis[E[a][i]] = true;
				D[E[a][i]] = D[a]^1;
				M[E[a][i]].X = A[a].R       * M[a].X;
				M[E[a][i]].Y = A[E[a][i]].R * M[a].Y;
				M[E[a][i]] = trim(M[E[a][i]]);
				Q.push(E[a][i]);
			}
		}
		
		for(i = 0; i < n; i++){
			if(!vis[i]){
				cout << "not moving\n";
				continue;
			}
			cout << M[i].X;
			if(M[i].Y != 1) cout << "/" << M[i].Y;
			if(D[i]) cout << " counterclockwise\n";
			else 		  cout << " clockwise\n";
		}
	}
}
