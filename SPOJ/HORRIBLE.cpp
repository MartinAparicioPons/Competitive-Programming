#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000010;
typedef long long ll;

ll F[MAXN], Fd[MAXN], N;

void range_update(int l, int r, ll d){
	ll c = (-d) * (l-1);
	while(l <= N){
		Fd[l] += d;
		F[l]  += c;
		l |= l+1;
	}
	c = d*r;
	while(r <= N){
		Fd[r] -= d;
		F[r]  += c;
		r |= r+1;
	}
}

ll query(int i){
	ll d = 0, c = 0, s = i;
	while(i >= 0){
		d += Fd[i];
		c += F[i];
		i = (i & (i+1)) - 1;
	}
	return d * s + c;
}

int main(){
	ios_base::sync_with_stdio(0);
	int T, c, g;
	ll p, q, v;
	cin >> T;
	while(T--){
		cin >> N >> c;
		memset(F, 0, sizeof F);
		memset(Fd, 0, sizeof Fd);
		while(c--){
			cin >> g;
			if(g){
				cin >> p >> q;
				cout << query(q) - query(p-1) << endl;
			} else {
				cin >> p >> q >> v;
				range_update(p, q, v);
			}
		}
	}
}

