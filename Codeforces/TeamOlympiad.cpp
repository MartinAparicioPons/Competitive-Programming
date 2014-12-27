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

int main() {
	int n, a, i;
	multimap<int, int> s;
	multimap<int, int>::iterator it;
	vector<iii> r;
	cin >> n;
	for0(i, n){
		cin >> a;
		s.insert(MP(a, i+1));
	}
	int t1,t2,t3, w=0;
	while(!s.empty()){
		t1 = t2 = t3 = 0;
		it = s.find(1);
		if(it != s.end()){
			t1 = it->second;
			s.erase(it);
		}
		it = s.find(2);
		if(it != s.end()){
			t2 = it->second;
			s.erase(it);
		}
		it = s.find(3);
		if(it != s.end()){
			t3 = it->second;
			s.erase(it);
		}
		if(t1 && t2 && t3){
			r.PB(MTi(t1,t2,t3));
			//cout << t1 << " " << t2 << " " << t3 << endl;
			w++;
		} else break;
	}
	cout << w << endl;
	for0(i, w){
		cout << r[i].X << " " << r[i].Y.X << " " << r[i].Y.Y << endl;
	}
}







