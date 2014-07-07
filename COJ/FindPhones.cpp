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
#include <cstdlib>
#include <locale>
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
#define _MP make_pair
#define _TL(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define _TU(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;

int tel[505];
class UnionFind {
private:
  vi p, rank, setSize;
  int numSets;
public:
  UnionFind(int N) {
    setSize.assign(N, 1); numSets = N; rank.assign(N, 0);
    p.assign(N, 0); for (int i = 0; i < N; i++) p[i] = i;}
  int findSet(int i) { return (p[i] == i) ? i : (p[i] = findSet(p[i])); }
  bool isSameSet(int i, int j) { return findSet(i) == findSet(j); }
  void unionSet(int i, int j) { 
    if (!isSameSet(i, j)) { numSets--; 
      int x = findSet(i), y = findSet(j);
      if (rank[x] > rank[y]) { p[y] = x; setSize[x] += setSize[y]; 
		  if (tel[x] == 0) tel[x] = tel[y];}
      else { p[x] = y; setSize[y] += setSize[x];
		     if (tel[y] == 0) tel[y] = tel[x];
             if (rank[x] == rank[y]) rank[y]++; } } }
  int numDisjointSets() { return numSets; }
  int sizeOfSet(int i) { return setSize[findSet(i)]; }
  int getTel(int i) {return tel[findSet(i)];}
};


int main(){
	int n, f, a, b, i;
	scd(n);
	UnionFind UF(n+1);
	for(i=1; i<=n; i++){
		scanf("%d", &tel[i]);
	}
	while(scd2(a,b) != EOF){
		UF.unionSet(a, b);
	}
	for(i=1; i<=n; i++){
		printf("%d\n", UF.getTel(i));
	}
}





