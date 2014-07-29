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
#include <cmath>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define dprd(x) printf("|| %d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define dprd2(x,y) printf("||%d | %d\n", x,y)
#define prnl() printf("\n")
#define prc(c) printf("%c\n", c)
#define fora(i,a,n) for(i = a; i < n; i++)
#define for0(i,n) for(i = 0; i < n; i++)
#define for1(i,n) for(i = 1; i <= n; i++)
#define cin1(a) cin >> a
#define cin2(a, b) cin >> a >> b
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define _TL(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define _TU(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define SQ(x) ((x)*(x))
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, ii> iii;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<string> vs;
typedef vector< vector<int> > vvi;


int main(){
	int n, i, j;
	vi d;
	while(scd(n), n!=0){
		d.clear();
		queue<int> q;
		j = 1;
		if(n == 1){
			printf("Discarded cards:\nRemaining card: 1\n");
			continue;
		}
		for1(i, n){
			q.push(i);
		}
		while(q.size() > 1){
			d.push_back(q.front());
			q.pop();
			if(!q.empty()) {
				q.push(q.front());
				j = q.front();
				q.pop();
			}
		}
		printf("Discarded cards: ");
		for(i = 0; i < d.size() - 1; i++){
			printf("%d, ", d[i]);
		}
		printf("%d\nRemaining card: %d\n", ((d.empty())?0:d[i]), j);
	}
}







