#include <bits/stdc++.h>
using namespace std;

int res(int p, int t){
	return (int) max((3.0*p)/10.0, p - (p*t)/250.0);
}

int main(){
	ios_base::sync_with_stdio(0);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if(res(a,c) > res(b,d)) cout << "Misha\n";
	else if(res(a,c) < res(b,d)) cout << "Vasya\n";
	else cout << "Tie\n";
}
