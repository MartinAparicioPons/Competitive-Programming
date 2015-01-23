#include <bits/stdc++.h>
using namespace std;

bool b[101];

unsigned long long pow2(int x){
	int i;
	unsigned long long y = 1;
	for(i = 0; i < x; i++) y*=2;
	return y;
}

int main(){
	ios_base::sync_with_stdio(0);
	unsigned long long  n, _n, act = 0;
	int i, ant = 0, h;
	cin >> h >> n;
	n--;
	_n = n; i = h;
	while(_n){
		b[--i] = _n%2;
		_n /= 2;
	}
	for(i = 0; i < h; i++){
		//cerr <<i << " "<<act<<" "<<b[i]<<endl;
		if(b[i] == ant){
			ant ^= 1;
			act = act+1;
		} else {
			act += pow2(h-i);
		}
	}
	cout << act << endl;
}

