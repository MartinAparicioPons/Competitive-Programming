#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl
#define F first
#define S second

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef vector<ii> vii;
const static int MAXN = 110;

int main(){        
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, i, j, M[MAXN][MAXN];
	set<int> C;
	cin >> n;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cin >> M[i][j];
			if(M[i][j] == 2) C.insert(j+1);
			if(M[i][j] == 3){
			 C.insert(i+1);
			 C.insert(j+1);
			}
			
		}
	}
	cout << ( n - C.size()) << endl;
	for(i = 1; i <= n; i++){
		if(!C.count(i)){
			cout << i << " ";
		}
	}
	cout << endl;
}
