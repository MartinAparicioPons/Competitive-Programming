#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll M = 1000000007, B = 257, MAXN = 1000010;
ll T[MAXN];
set<ll> P;

ll H(string s){
	ll r = 0;
	for(int i = 0; i < s.size(); i++){
		r = (r*B + s[i])%M;
	}
	return r;
}

bool query(string s){
	ll h = H(s), l, k; 
	int i, n = s.size();
	for(i = 0; i < n; i++){
		for(k = 'a'; k <= 'c'; k++){
			if(s[i] == k) continue;
			l = (((h + T[n-i-1]*(k - s[i]))%M) + M)%M;
			if(P.find(l) != P.end()) return true;
		}
	}
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);
	int n, q, i;
	string s;
	
	T[0] = 1;
	for(i = 1; i < MAXN; i++){
		T[i] = (T[i-1]*B)%M;
	}
	
	cin >> n >> q;
	getline(cin, s);
	for(i = 0; i < n; i++){
		getline(cin, s);
		P.insert(H(s));
	}
	
	for(i = 0; i < q; i++){
		getline(cin, s);
		if(query(s)) cout << "YES\n";
		else   		 cout <<  "NO\n";
	}
}
