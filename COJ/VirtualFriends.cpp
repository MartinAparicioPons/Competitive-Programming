#include <cstdio>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdlib>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define prc(c) printf("%c\n", c)
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) for(i = 0; i < n; i++)
#define _F first
#define _S second
using namespace std;

typedef vector<int> vi;

class UnionFind {                                              // OOP style
private:
	vi p, rank, setSize;                       // remember: vi is vector<int>
	int numSets;
public:
	UnionFind(int N) {
		setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
		p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i; }
	int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
	bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
	void unionSet(int i, int j) { 
		if (!isSameSet(i, j)) { numSets--; 
		int x = findSet(i), y = findSet(j);
		if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
		else                   { p[x] = y; setSize[y] += setSize[x];
								 if (rank[x] == rank[y]) rank[y]++; } } }
	int numDisjointSets() { return numSets; }
	int sizeOfSet(int i) { return setSize[findSet(i)]; }
};


int main(){
	int i, aut, n, t, a1, a2;
	map<string, int> m;
	string s1, s2;
	char a[25], b[25];
	scd(t);
	while(t--){
		aut = 0;
		m.clear();
		scd(n);
		UnionFind uf(n+1);
		for0(i, n){
			scanf("%s %s", a, b);
			s1 = a; s2 = b;
			if(m.find(s1) != m.end()){
				a1 = m[s1];
			} else {
				a1 = ++aut;
				m.insert(make_pair(s1, a1));
			}
			if(m.find(s2) != m.end()){
				a2 = m[s2];
			} else {
				a2 = ++aut;
				m.insert(make_pair(s2, a2));
			}
			uf.unionSet(a1, a2);
			prd(uf.sizeOfSet(a1));
		}
	}
}
