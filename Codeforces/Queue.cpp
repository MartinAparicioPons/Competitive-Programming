#include <bits/stdc++.h>
#define for0(i, n) for(i = 0; i < n; i++)
#define for1(i, n) for(i = 1; i <= n; i++)
#define fora(i, a, n) for(i = a; i < n; i++)
#define dprc(x) printf("| %c\n", x)
#define dprd(x) printf("| %d\n", x)
#define dprd2(x,y) printf("| %d %d\n", x, y)
#define prd(x) printf("%d\n", x)
#define prd2(x,y) printf("%d %d\n", x, y)
#define scd(x) scanf("%d", &x)
#define scd2(x, y) scanf("%d%d", &x, &y)
#define NL() printf("\n")
#define PB push_back
#define MP make_pair
#define MT(x, y, z) MP(MP(x, y), z)
#define MTi(x, y, z) MP(x, MP(y, z))
#define MAX(x, y) ((x>y)?x:y)
#define X first
#define Y second
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, pair<int, int> > iii;
typedef long long ll;
typedef unsigned long long ull;

const int MAX = 200100;
int n, a, b, i, j, A[MAX], M, B[MAX];
map<int, int> v, m, k;
map<int, int>::iterator it;
set<int> u;

int I;
void solve(int p){
	it = m.find(p);
	if(it != m.end()){
		solve(it->second);
	}
	if(u.find(p) == u.end()){
		//cerr << "."<< p << " ";
		B[I++] = p;
		u.insert(p);
	}
}
void solve2(int p){
	it = v.find(p);
	if(u.find(p) == u.end()){
		B[I++] = p;
		u.insert(p);
	}
	if(it != v.end()){
		solve2(it->second);
	}
}

int main() {
	memset(A, 0, sizeof A);
	memset(B, 0, sizeof B);
	I = 0;
	cin >> n;
	for0(i, n){
		cin >> a >> b;
		v.insert(MP(a, b));
		m.insert(MP(b, a));
	}
	i = 0; a = 1;
	while(a < n) {
		it = v.find(i);
		if(it == v.end()) break;
		if(a > 1){
			A[a-2] = i;
		}
		A[a] = it->second;
		v.erase(it);
		m.erase(m.find(it->second));
		i = it->second;
		a+=2;
	}
	if(n%2 == 0){
		i = 0; a = n-2;
		while(a >= 0) {
			it = m.find(i);
			if(it == m.end()) break;
			if(a > 1){
				A[a-2] = i;
			}
			A[a] = it->second;
			i = it->second;
			a-=2;
		}
	} else {
		m.erase(0);
		M = m.begin()->first;
		//cerr << M << endl;
		//for(it = m.begin(); it != m.end(); it++)cout << it->first << ", " << it->second << endl;
		solve(M);
		solve2(M);
		//for0(i, n){cout << B[i] << " ";}
		i = 0; j = 0;
		while(i < n){
			A[i] = B[j++];
			i+=2;
		}
	}
	for0(i, n){
		cout << A[i] << " ";
	}
	NL();
}







