#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, N, i, v[60];
	char p[60];
	cin >> T;
	for(;T--;){
		cin >> N;
		for(i = 0; i < N; i++){
			cin >> v[i] >> p[i];
		}
		bool ok = true;
		for(i = 1; i < N; i++){
			if(v[i] == v[i-1] || p[i] == p[i-1]){
				ok = false;
			}
		}
		printf("%c\n", (ok)?'B':'M');
	}
}
