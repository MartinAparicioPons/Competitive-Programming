#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 500010;

int main(){
	ios_base::sync_with_stdio(0);
	int i;
	ll n, A[MAXN], S[MAXN], t1, t2, r1, r2;
	cin >> n;
	S[0] = 0;
	for(i = 0; i < n; i++){
		cin >> A[i];
		S[i+1] = S[i] + A[i];
	}
	
	if(S[n]%3) {
		cout << "0\n";
		return 0;
	}
	
	t1 = S[n]/3; t2 = t1*2; r1 = r2 = 0;
	for(i = 1; i < n; i++){
		if(S[i] == t2) r2 += r1;
		if(S[i] == t1) r1++;
	}
	cout << r2 << endl;
}
