#include <bits/stdc++.h>
using namespace std;
#define DEB(x) cerr << "# " << (#x) << ": " << (x) << endl;

typedef long long ll; typedef unsigned long long ull;
typedef int tint; typedef pair<tint, tint> ii;
const int MAXN = 100010;

int main(){
	ios_base::sync_with_stdio(0);
	string S, R;
	int i, n, c, j, a;
	cin >> R;
	while(cin >> S){
		n = S.size(); c = 0; j = R.size() - 1;
		for(i = n-1; i >= 0; i--, j--){
			a = (S[i] - '0') + (R[j] - '0');
			R[j] = ((a + c)%10) + '0';
			c = (a + c)/10;
		}
		while(j >= 0){
			a = R[j] - '0';
			R[j] = (a + c)%10 + '0';
			c = (a + c)/10;
			j--;
		}
		S = ""; S+= c+'0';
		if(c > 0) R.insert(0, S);
	}
	cout << R << endl;
}
