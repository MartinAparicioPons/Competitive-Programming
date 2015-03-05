#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 100010;


int main(){
	ios_base::sync_with_stdio(0);
	int n, a, b, c, R[2], i;
	int S[3][MAXN];
	cin >> n;
	for(a = 0; a < n; a++){
		cin >> b;
		S[0][a] = b;
	}
	for(a = 0; a < n-1; a++){
		cin >> b;
		S[1][a] = b;
	}
	for(a = 0; a < n-2; a++){
		cin >> b;
		S[2][a] = b;
	}
	sort(S[0], S[0]+n);
	sort(S[1], S[1]+n-1);
	sort(S[2], S[2]+n-2);
	
	for(i = 0; i < n; i++){
		if(S[0][i] != S[1][i]) {
			cout << S[0][i] << endl;
			break;
		}
	}
	for(i = 0; i < n-1; i++){
		if(S[1][i] != S[2][i]) {
			cout << S[1][i] << endl;
			break;
		}
	}

}
