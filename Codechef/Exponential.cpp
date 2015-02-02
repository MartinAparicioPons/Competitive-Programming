#include <bits/stdc++.h>
using namespace std;
 
const long double LN10 = log(10.0);
 
int main(){
	ios_base::sync_with_stdio(0);
	int T, x;
	long double res;
	cin >> T;
	while(T--){
		cin >> x;
		res = ((long double)x)/LN10;
		if(!x) res = 1;
		cout << (int)ceil(res) << endl;
	}
}
 
