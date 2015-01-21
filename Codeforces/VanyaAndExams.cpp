#include <bits/stdc++.h>
using namespace std;
#define Y second
#define X first

typedef long long ll;

const int MAXN = 100100;

int main(){
	ios_base::sync_with_stdio(0);
	int i;
	ll n, r, avg, act = 0, R = 0, aux;
	pair<ll, ll> p[MAXN];
	cin >> n >> r >> avg;
	avg *= n;
	for(i = 0; i < n; i++){
		cin >> p[i].Y >> p[i].X;
		act += p[i].Y;
	}
	sort(p, p+n);
	i = 0;
	while(act < avg){
		if(p[i].Y < r){
			aux = min(r - p[i].Y, avg - act);
			R += p[i].X * aux;
			p[i].Y = r;
			act += aux;
		} else {
			i++;
		}
	}
	cout << R << endl;
}
