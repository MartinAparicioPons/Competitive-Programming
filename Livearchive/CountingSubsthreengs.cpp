#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	long long i, n, j, aux, res, m[3], p[3];
	while(cin >> s){
		n = s.size();
		memset(m, 0, sizeof m);
		
		for(i = res = 0; i < n; i++){
			if(s[i] >= '0' && s[i] <= '9'){
				for(j = 0; j < 3; j++){
					p[j] = m[j];
					m[j] = 0;
				}
				aux = (s[i] - '0')%3;
				m[aux] = 1;
				for(j = 0; j < 3; j++){
					m[(j + aux)%3] += p[j];
				}
				res += m[0];
			} else {
				memset(m, 0, sizeof m);
			}
		}
		cout << res << endl;
	}
}
