#include <bits/stdc++.h>
#define for0(i, n) for(i = 0; i < n; i++)
#define fora(i, n, a) for(i = a; i < n; i++)
#define dprd(x) printf("| %d\n", x)
#define dprd2(x,y) printf("| %d %d\n", x, y)
#define NL() printf("\n")
using namespace std;

int main() {
	int T, i, a[100500], n;
	set<int, greater<int> > s;
	set<int>::iterator it;
	cin >> T;
	for(;T--;){
		s.clear();
		cin >> n;
		for0(i, n){
			cin >> a[i];
		}
		for(i = 0; i < n; i++){
			it = s.upper_bound(a[i]);
			//dprd(*it);
			if(it == s.end()){
				s.insert(a[i]);
			} else {
				s.erase(it);
				s.insert(a[i]);
			}
		}
		cout << s.size() << endl;
	}
}
