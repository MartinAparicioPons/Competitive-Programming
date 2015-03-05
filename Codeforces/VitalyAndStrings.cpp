#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 100040;


int main(){
	ios_base::sync_with_stdio(0);
	int n, i, j;
	string a, b;
	bool change = false;
	cin >> a >> b;
	n = a.size();
	for(i = n-1; i >= 0; i--){
		if(a[i] == 'z') a[i] = 'a';
		else {
			a[i]++;
			break;
		}
	}
	if(a < b) cout << a << endl;
	else 	  cout << "No such string\n";
}
