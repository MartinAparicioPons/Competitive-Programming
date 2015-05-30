#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl
#define F first
#define S second

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi; typedef vector<ii> vii;
const static int MAXN = 1000000010;

// This cames from the function of the sum of numbers divisible by N:
//   sumdiv(n) = n*(M*(M-1))/2.			Where M is the number searching.
ll sumDiv(ll t, ll n){
	ll p = t / n;
	return n*(p*(p+1))/2;
}

int main(){
	ll tc, i, n, x;
	cin >> tc;
	while(tc--){
		cin >> n; 
		// Whe need to subtract one, because we need numbers less strict.
		n--;
		// Whe need to sum all the multiples by 3 and 5, but
		//   take care of the multiples of both.
		x = sumDiv(n, 3) + sumDiv(n, 5) - sumDiv(n, 15);
		cout << x << endl;
	}
}
