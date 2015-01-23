#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100100;

int main(){
	ios_base::sync_with_stdio(0);
	int n, T, i, a[MAXN], b, c, me;
	cin >> T;
	while(T--){
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		b = a[0]; c = me = 0;
		for(i = 1; i < n; i++){
			if(b != a[i] && (i - c) > n/2){
				me = b;
			}
			if(b != a[i]){
				c = i; 
				b = a[i];
			}
		}
		if(b == a[n-1] && i - c > n/2) me = b;
		if(me) cout << me << endl;
		else   cout << "NO MAJOR\n";
	}
}

