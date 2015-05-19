#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll;
typedef pair<int, int> ii; typedef pair<int, ii> iii;
typedef vector<int> vi;    typedef vector<ii> vii;
const int MAXN = 300;

inline bool letter(char c){
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main () {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, i, r, F[MAXN];
	string L, R;
	while(getline(cin, L)){
		n = L.size();
		memset(F, 0, sizeof F);
		for(i = 0; i < n; i++) F[L[i]]++;
		for(i = r = 0; i < MAXN; i++) if(letter(i)) {
			if(r < F[i]){
				r = F[i];
				R = "";
				R = R + char(i);
			} else if(r == F[i]){
				R = R + char(i);
			}
		}
		sort(R.begin(), R.end());
		if(!r) cout << "0\n";
		else   cout << R << " " << r << endl;
	}
}
