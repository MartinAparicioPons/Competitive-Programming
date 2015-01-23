#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10010;

int main(){
	ios_base::sync_with_stdio(0);
	int n, k, i, act = 0;
	pair<int, int> a[MAXN];
	cin >> n >> k;
	for(i = 0; i < n; i++){
		cin >> a[i].first;
		a[i].second = i+1;
	}
	sort(a, a+n);
	for(i = 0; i < n; i++){
		k -= a[i].first;
		if(k < 0) break;
		act++;
	}
	cout << act << endl;
	for(i = 0; i < act; i++){
		cout << a[i].second << " \n"[i == act-1];
	}
	return 0;
}

