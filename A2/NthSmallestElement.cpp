#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 110;

int main(){
	ios_base::sync_with_stdio(0);
	int t, a, i, m, p;
	cin >> t; 
	while(t--){
		cin >> m; p = 1<<30;
		for(i = 1; i < 10; i++){
			cin >> a;
			if(a <= m) p = m, m = a;
			else if(a <= p) p = a;
		}
		cout << p << endl;
	}
}
