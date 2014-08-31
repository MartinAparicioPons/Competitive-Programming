#include <bits/stdc++.h>
#define scd(x) scanf("%d", &x)
#define scc(x) scanf("%c", &x)
#define scd2(x,y) scanf("%d %d", &x, &y)
#define prd(x) printf("%d\n", x)
#define dprd(x) printf("|| %d\n", x)
#define prd2(x,y) printf("%d %d\n", x,y)
#define dprd2(x,y) printf("||%d | %d\n", x,y)
#define prnl() printf("\n")
#define prc(c) printf("%c\n", c)
#define for0(i,n) for(i = 0; i < n; i++)
#define for1(i,n) for(i = 1; i <= n; i++)
#define _F first
#define _S second
#define _MP make_pair
#define _MT(x, y, z) _MP(x, _MP(y, z))
#define SQ(x) ((x)*(x))
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long ll;

int main(){
	map<string, int> m;
	map<string, int>::reverse_iterator it;
	int n, T, i, j;
	string in;
	scd(T);
	while(T--){
		m.insert(_MP("TTT", 0));
		m.insert(_MP("TTH", 0));
		m.insert(_MP("THT", 0));
		m.insert(_MP("THH", 0));
		m.insert(_MP("HTT", 0));
		m.insert(_MP("HTH", 0));
		m.insert(_MP("HHT", 0));
		m.insert(_MP("HHH", 0));
		cin >> n >> in;
		for(i = 0; i < 38; i++){
			string aux(in.begin()+i, in.begin()+i+3);
			m[aux]++;
		}
		cout << n;
		for(it = m.rbegin(); it != m.rend(); it++){
			cout << " " << (it->second);
		}
		prnl();
		m.clear();
	}
}







