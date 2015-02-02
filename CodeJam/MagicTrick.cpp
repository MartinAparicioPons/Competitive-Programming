#include <bits/stdc++.h>
using namespace std;

// 17 min

int main(){
	ios_base::sync_with_stdio(0);
	set<int> s;
	int t, T, a, b, c, i, j, aux, f[4];
	cin >> T;
	for(t = 1; t <= T; t++){
		cin >> a;
		for(i = 0; i < 4; i++){
			for(j = 0; j < 4; j++){
				cin >> c;
				if(a == i+1) f[j] = c;
			}
		}
		cin >> b;
		for(i = 0; i < 4; i++){
			for(j = 0; j < 4; j++){
				cin >> c;
				if(b == i+1) s.insert(c);
			}
		}
		for(i = c = 0; i < 4; i++){
			if(s.find(f[i]) != s.end()){
				c++;
				aux = f[i];
			}
		}
		if(c == 1){
			printf("Case #%d: %d\n", t, aux);
		} else if(c == 0){
			printf("Case #%d: Volunteer cheated!\n", t);
		} else {
			printf("Case #%d: Bad magician!\n", t);
		}
		s.clear();
	}
}
 
