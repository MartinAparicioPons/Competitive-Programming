#include <bits/stdc++.h>
#define for0(i, n) for(i = 0; i < n; i++)
#define fora(i, n, a) for(i = a; i < n; i++)
#define dprd(x) printf("| %d\n", x)
#define dprd2(x,y) printf("| %d %d\n", x, y)
#define NL() printf("\n")
using namespace std;

int main() {
	int n, k, i, j, a[1010];
	set<int> s;
	set<int>::iterator it;
	cin >> n >> k;
	for0(i, k){
		cin >> a[i];
	}
	k+=2;
	a[i+1] = n;
	a[i+2] = 0;
	sort(a, a+k);
	for(i = 0; i < k; i++){
		for(j = i+1; j < k; j++){
			s.insert(a[j] - a[i]);
		}
	}
	for(it = s.begin(); it != s.end(); it++){
		if(it != s.begin())cout << " ";
		cout << *it;
	}
	NL();
}
