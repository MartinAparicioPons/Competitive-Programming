#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 110, INF = 2500000;

int main(){
	ios_base::sync_with_stdio(0);
	int n, i, k, m, a, j;
	int F[10][10] = {{0},{0},
		{0,0,1,1,3,3,4,4,7,7}, 
		{0,0,0,1,1,1,2,2,2,4}, {0}, 
		{0,0,0,0,0,1,1,1,1,1}, {0},
		{0,0,0,0,0,0,0,1,1,1}, {0},{0}};
	string s;
	int r[20]={0};
	cin >> n;
	cin >> s;
	
	for(i = 0; i < n; i++){
		for(k = 0; k <= 9; k++){
			a = F[k][s[i]-'0'];
			r[k] += a;
		}
	}
	
	string R = "";
	for(k = 9; k > 1; k--){
		for(j = 0; j < r[k]; j++){
			R += k + '0';
			if(k == 7) r[5]--, r[3]-=2, r[2]-=4;
			if(k == 5) r[3]--, r[2]-=3;
			if(k == 3) r[2]--;
		}
	}
	cout << R << endl;
}
