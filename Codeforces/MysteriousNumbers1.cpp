#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int a, b, c = 0;
	cin >> a >> b;
	while(b){
		c = (c*10) + (b%10);
		b /= 10;
	}
	cout << a + c << endl;
}
