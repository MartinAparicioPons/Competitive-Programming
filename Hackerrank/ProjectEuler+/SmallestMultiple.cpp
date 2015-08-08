#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
const static ll MAXN = 41;

map<int, int> M[MAXN];
int P[12] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
vi F[MAXN];

void fact(){
	int i, j, aux;
	for(i = 0; i < 12; i++){
		for(j = P[i]; j < MAXN; j+=P[i]){
			aux = j;
			while(aux%P[i] == 0){
				F[j].push_back(P[i]);
				aux /= P[i];
			}
		}
	}
	for(i = 2; i < MAXN; i++){
		for(int x : F[i]){
			if(M[i].count(x)) M[i][x]++;
			else 			  M[i][x] = 1;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	fact();
	int T, i, n;
	map<int, int> R;
	cin >> T;
	while(T--){
		cin >> n;
		R.clear();
		for(i = 2; i <= n; i++){
			for(auto x : M[i]){
				if(R.count(x.first)){
					R[x.first] = max(R[x.first], x.second);
				} else {
					R[x.first] = x.second;
				}
			}
		}
		ll r = 1;
		for(auto x : R){
			while(x.second--) r *= x.first;
		}
		cout << r << endl;
	}
}
