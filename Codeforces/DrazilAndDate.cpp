#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> ii;
const int MAXN = 100010;

int main(){
	ios_base::sync_with_stdio(0);
	ll a, b, c, s;
	cin >> a >> b >> s;
	c = abs(a) + abs(b);
	if(s < c || (s+c)%2 == 1) cout << "No\n";
	else cout << "Yes\n";
}
