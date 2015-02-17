#include <bits/stdc++.h>
using namespace std;

const int MAXN = 55;

int main(){
	ios_base::sync_with_stdio(0);
	int n, i, j, r, c;
	cin >> r >> c;
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			if(!(i%2)){
				cout << "#";
			} else if(i % 4 == 1 && j == c-1){
				cout << "#";
			} else if(i % 4 == 3 && j == 0){
				cout << "#";
			} else {
				cout << ".";
			}
		}
		cout << endl;
	}
}
