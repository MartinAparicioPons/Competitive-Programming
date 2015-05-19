#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << x << endl;
#define F first
#define S second

typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> ii;
const int MAXN = 110, MAX = INT_MAX;

int main(){
	int n, i;
	bool a[33]={false};
	string s;
	cin >> n;
	cin >> s;
	for(i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
		a[s[i]-'a'] = true;
	}
	for(i = 0; i <= 'z'-'a'; i++){
		if(!a[i]) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}
