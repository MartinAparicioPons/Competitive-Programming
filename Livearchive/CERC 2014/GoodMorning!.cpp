#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXK = 200;

int M[4][3];
set<int> DP;

void precalc(int i, int j, int k){
	if(i >= 4 || j >= 3 || k > MAXK || M[i][j] == -1 || (!M[i][j] && !k)) return;
	precalc(i, j+1, k);
	precalc(i+1, j, k);
	k = (k*10) + M[i][j];
	precalc(i, j, k);
	DP.insert(k);
}

int main(){
	ios_base::sync_with_stdio(0);
	int i, j, k, T;
	for(i = 0; i < 3; i++) for(j = 1; j < 4; j++) M[i][j-1] = (3*i) + j;
	M[3][0] = M[3][2] = -1;
	M[3][1] = 0;
	precalc(0, 0, 0);
	
	cin >> T;
	while(T--){
		cin >> k;
		set<int>::iterator it = DP.lower_bound(k);
		if(it != DP.begin()){
			i = abs(k - (*it)); 
			it--;
			j = abs(k - (*it));
			if(i < j) it++;
			cout << (*it) << endl;
		} else cout << (*it) << endl;
		
	}
}
