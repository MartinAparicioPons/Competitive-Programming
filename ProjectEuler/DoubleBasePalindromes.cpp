#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
 
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 1000000;

bool i_is_pal(int n){
	int a = 0, b = n;
	while(b){
		a = a*10 + b%10;
		b /= 10;
	}
	return a == n;
}

bool s_is_pal(const string &s){
	int i, n = s.size();
	for(i = 0; i*2 < n; i++){
		if(s[i] != s[n-i-1]) return false;
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(0);
	int i, R = 0, n;
	string s;
	for(i = 1; i <= MAXN; i++){
		s = ""; n = i;
		while(n){
			s += (n%2) + '0';
			n /= 2;
		}
		if(i_is_pal(i) && s_is_pal(s)){
			R += i;
		}
	}
	cout << R << endl;
}
