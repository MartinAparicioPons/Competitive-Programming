#include <cstdio>
#include <cctype>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <cstring>
#include <sstream>
#include <cstdlib>
#include <locale>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define dprd(x) printf("|| %d\n", x)
#define dprd2(x, y) printf("|| %d | %d\n", x, y)
#define prd2(x,y) printf("%d %d\n", x,y)
#define prnl() printf("\n")
#define prc(c) printf("%c\n", c)
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) fora(i, 0, n)
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define _TL(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define _TU(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;

class UnionFind {
private:
  vi p, rank, setSize;
  int numSets;
public:
  UnionFind(int N){
    setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
    p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i; }
  int findSet(int i){
	return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j){
    return findSet(i) == findSet(j); }
  void unionSet(int i, int j){ 
    if (!isSameSet(i, j)) { numSets--; 
    int x = findSet(i), y = findSet(j);
    if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; }
    else                   { p[x] = y; setSize[y] += setSize[x];
                             if (rank[x] == rank[y]) rank[y]++; } } }
  int numDisjointSets(){
	return numSets; }
  int sizeOfSet(int i){
	return setSize[findSet(i)]; }
};

int main(){
	int i, t, n, j, aa, bb;
	string a, b;
	map<string, int> m;
	scd(t);
	for(;t--;){
		m.clear();
		scd(n);
		UnionFind UF(n+1);
		for(j=0, i=0; i < n; i++){
			cin >> a >> b;
			if(m.find(a) == m.end()){
				aa = j;
				m.insert(_MP(a, j++));
			} else {
				aa = m[a];
			}
			if(m.find(b) == m.end()){
				bb = j;
				m.insert(_MP(b, j++));
			} else {
				bb = m[b];
			}
			//dprd2(aa, bb);
			UF.unionSet(aa, bb);
			prd(UF.sizeOfSet(aa));
		}
		
	}
}






