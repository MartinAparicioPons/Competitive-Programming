#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100100, Init = MAXN-1; //Tal que A[Init]=0

int N, V[4*MAXN], A[MAXN];

void init(int n){
	N = n;
	for(int i = 0; i <= 4*n; i++){
		V[i] = Init;		
	}
}

int join(int a, int b){
	if(A[a] > A[b]) return a;
	return b;
}

int query(int o, int l, int r, int a, int b){
	if(a >= r || b <= l) return Init;
	if(a <= l && b >= r) return V[o];
	int mid = (l+r)/2;
	return join(query(o*2  , l, mid, a, b), 
				query(o*2+1, mid, r, a, b));
}
int query(int a, int b){
	return query(1, 0, N, a, b);
}

void modify(int o, int l, int r, int a){
	if(l == r-1) V[o] = a;
	else {
		int mid = (l+r)/2;
		if(a < mid) modify(2*o  , l, mid, a);
		else 		modify(2*o+1, mid, r, a);
		V[o] = join(V[2*o], V[2*o+1]);
	}
}
void update(int a){
	modify(1, 0, N, a);
}

int main(){
	ios_base::sync_with_stdio(0);
	int n, i, Q, a, b, d, e;
	char c;
	cin >> n;
	init(n);
	for(i = 0; i < n; i++){
		cin >> A[i];
		update(i);
	}
	cin >> Q;
	while(Q--){
		cin >> c >> a >> b;
		a--;
		if(c == 'U'){
			A[a] = b;
			update(a);
		} else {
			d = query(a, b);
			cout << A[d] + A[join(query(a, d), query(d+1, b))] << endl;
		}
	}
}

