#include <bits/stdc++.h>
using namespace std;
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define prd(x) printf("%d\n", x)

// RMQ
// ---

const int MAXN = 100001;

int T[4*MAXN], N, Next;
map<int, pair<int, int> > M;	// {valor, cantidad, posicion}

int join(int a, int b){
	return __gcd(a, b);
}

void init(int n){
	N = n;
	Next = 0;
}

int mid;
void modify(int a, int q, int root, int l, int r){
	if(l == r){
		T[root] = q;
	} else {
		mid = (l+r)/2;
		if(a <= mid) modify(a, q, 2*root, l, mid);
		else 		 modify(a, q, (2*root)+1, mid+1, r);
		T[root] = join(T[2*root], T[(2*root)+1]);
	}
}

void modify(int a, int q){
	modify(a, q, 1, 0, N-1);
}

int query_add(int q){
	if(M.find(q) == M.end()){
		modify(Next, q);
		M[q] = make_pair(1, Next++);
	} else {
		M[q].first++;
	}
	return T[1];
}

pair<int, int> aux;
int query_erase(int q){
	aux = M[q];
	if(aux.first == 1){
		modify(aux.second, 0);
		M.erase(q);
	} else {
		M[q].first--;
	}
	return (!M.empty())?T[1]:1;
}

// ---

int main(){
	ios_base::sync_with_stdio(0);
	int Q, q;
	char x;
	cin >> Q;
	init(Q);
	while(Q--){
		cin >> x >> q;
		if(x == '+') printf("%d\n", query_add(q));
		else 		 printf("%d\n", query_erase(q));
	}
}

