#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 100010, MAXM = 10000010;
typedef unsigned long long ull;
ull A, F[MAXM], r, m, a;
 
ull mod_fact(ull a){
	if(a <= m)	return F[a]%m;
	else 		return 0;
}
 
ull fun(ull a){
	ull r = 0;
	if(a%2 == 0){
		r = ((a%m) * ((a/2)%m))%m;
		r = ((r%m) * ((a+1)%m))%m;
	} else {
		r = ((a%m) * (a%m))%m;
		r = ((r%m) * (((a+1)/2)%m))%m;
	}
	return r%m;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	int n, i;
	cin >> n >> m;
	F[0] = 1;
	for(i = 1; i <= m+1; i++){
		F[i] = ((i%m)*(F[i-1]%m))%m;
	}
	for(i = 0; i < n; i++){
		cin >> A;
		a = (mod_fact(A+1) - 1 + m)%m;
		a = (a + fun(A))%m;
		r = ((r%m) + (a%m))%m;
	}
	cout << r << endl;
}
