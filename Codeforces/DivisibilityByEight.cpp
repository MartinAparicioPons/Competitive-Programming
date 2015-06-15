#include <bits/stdc++.h>
#define DEB(x) cerr << "#" << (#x) << ": " << (x) << endl

using namespace std;
typedef long long ll; 		typedef pair<int, int> ii; 
typedef pair<int, ii> iii; 	typedef vector<int> vi;
typedef vector<ii> vii;		typedef vector<vi> vvi;
const static int MAXN = 110;

#define END(x) do {cout << "YES\n" << x << "\n"; return 0;} while(0);

int main () {
	string Z;
	set<int> S;
	int i, j, k, n, p;
	for(i = 16; i < 999; i+=8){
		S.insert(i);
	}
	cin >> Z;
	n = Z.size();
	for(i = 0; i < n; i++){
		if(Z[i] == '0' || Z[i] == '8') END(Z[i]);
	}
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j++){
			p = (Z[i] - '0')*10 + Z[j] - '0';
			if(S.count(p)) END(p);
		}
	}
	for(i = 0; i < n-2; i++){
		for(j = i+1; j < n-1; j++){
			for(k = j+1; k < n; k++){
				p = (Z[i] - '0')*100 + (Z[j] - '0')*10 + Z[k] - '0';
				if(S.count(p)) END(p);
			}
		}
	}
	cout << "NO\n";
}
