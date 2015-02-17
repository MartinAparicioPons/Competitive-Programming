#include <bits/stdc++.h>
using namespace std;

const int MAXN = 101, MAXC = 26;

int main(){
	ios_base::sync_with_stdio(0);
	int n, i, j, l, R[MAXC] = {0};
	bool L[MAXC][MAXC] = {false};
	string S[MAXN];
	cin >> n;
	for(i = 0; i < n; i++){
		cin >> S[i];
	}
	
	for(i = 0; i < n-1; i++){
		l = min(S[i].size(), S[i+1].size());
		for(j = 0; j < l; j++){
			if(S[i][j] != S[i+1][j]) break;
		}
		if(j >= S[i].size()) continue;
		if(j >= S[i+1].size()){
			cout << "Impossible\n";
			return 0;
		}
		if(j < S[i+1].size()){
			L[S[i][j]-'a'][S[i+1][j]-'a'] = true;
		}
	}
	
	for(l = 0; l < MAXC; l++){
		for(i = 0; i < MAXC; i++){
			for(j = 0; j < MAXC; j++){
				if(L[i][l] && L[l][j]) L[i][j] = true;
			}
		}
	}
		
	for(i = 0; i < MAXC; i++){
		if(L[i][i]){
			cout << "Impossible\n";
			return 0;
		}
	}
	
	for(i = 0; i < MAXC; i++){
		for(j = 0; j < MAXC; j++){
			if(L[j][i]) R[i]++;
		}
		R[i] = MAXC * R[i] + i;
	}
	sort(R, R+MAXC);
	
	for(i = 0; i < MAXC; i++){
		cout << (char)((R[i]%MAXC) + 'a');
	}
	cout << endl;
}
